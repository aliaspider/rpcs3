#pragma once

enum class ppu_decoder_type : unsigned
{
	_static,
	dynamic,
	llvm,
};

enum class spu_decoder_type : unsigned
{
	_static,
	dynamic,
	asmjit,
	llvm,
};

enum class spu_block_size_type
{
	safe,
	mega,
	giga,
};

enum class sleep_timers_accuracy_level
{
	_as_host,
	_usleep,
	_all_timers,
};

enum class keyboard_handler
{
	null,
	basic,
};

enum class mouse_handler
{
	null,
	basic,
};

enum class video_renderer
{
	null,
	opengl,
	vulkan,
};

enum class audio_renderer
{
	null,
#ifdef _WIN32
	xaudio,
#endif
	cubeb,
#ifdef HAVE_FAUDIO
	faudio,
#endif
};

enum class audio_provider
{
	none,
	cell_audio,
	rsxaudio
};

enum class audio_downmix
{
	no_downmix, // Surround 7.1
	downmix_to_stereo,
	downmix_to_5_1,
	use_application_settings
};

enum class camera_handler
{
	null,
	fake,
	qt
};

enum class camera_flip
{
	none,
	horizontal,
	vertical,
	both
};

enum class fake_camera_type
{
	unknown,
	eyetoy,
	eyetoy2,
	uvc1_1,
};

enum class move_handler
{
	null,
	fake,
	mouse,
};

enum class buzz_handler
{
	null,
	one_controller,
	two_controllers,
};

enum class turntable_handler
{
	null,
	one_controller,
	two_controllers,
};

enum class ghltar_handler
{
	null,
	one_controller,
	two_controllers,
};

enum class microphone_handler
{
	null,
	standard,
	singstar,
	real_singstar,
	rocksmith,
};

enum class pad_handler_mode
{
	single_threaded, // All pad handlers run on the same thread sequentially.
	multi_threaded   // Each pad handler has its own thread.
};

enum class video_resolution
{
	_1080,
	_720,
	_480,
	_576,
	_1600x1080,
	_1440x1080,
	_1280x1080,
	_960x1080,
};

enum class video_aspect
{
	_4_3,
	_16_9,
};

enum class frame_limit_type
{
	none,
	_59_94,
	_50,
	_60,
	_30,
	_auto,
};

enum class msaa_level
{
	none,
	_auto
};

enum class detail_level
{
	none,
	minimal,
	low,
	medium,
	high,
};

enum class screen_quadrant
{
	top_left,
	top_right,
	bottom_left,
	bottom_right
};

enum class tsx_usage
{
	disabled,
	enabled,
	forced,
};

enum class enter_button_assign
{
	circle, // CELL_SYSUTIL_ENTER_BUTTON_ASSIGN_CIRCLE
	cross   // CELL_SYSUTIL_ENTER_BUTTON_ASSIGN_CROSS
};

enum class np_internet_status
{
	disabled,
	enabled,
};

enum np_psn_status
{
	disabled,
	psn_fake,
	psn_rpcn,
};

enum class shader_mode
{
	recompiler,
	async_recompiler,
	async_with_interpreter,
	interpreter_only
};

enum class vk_gpu_scheduler_mode
{
	safe,
	fast
};

enum class vk_metal_semaphore_mode
{
	software,
	mtlevent_preferred,
	mtlevent,
	mtlfence
};

enum class thread_scheduler_mode
{
	os,
	old,
	alt
};

enum class perf_graph_detail_level
{
	minimal,
	show_min_max,
	show_one_percent_avg,
	show_all
};

enum class zcull_precision_level
{
	precise,
	approximate,
	relaxed,
	undefined
};
