using Il2CppDummyDll;

namespace Unity.Profiling;

[Token(Token = "0x200001B")]
public enum ProfilerCategoryColor : ushort
{
	[Token(Token = "0x400001F")]
	Render,
	[Token(Token = "0x4000020")]
	Scripts,
	[Token(Token = "0x4000021")]
	BurstJobs,
	[Token(Token = "0x4000022")]
	Other,
	[Token(Token = "0x4000023")]
	Physics,
	[Token(Token = "0x4000024")]
	Animation,
	[Token(Token = "0x4000025")]
	Audio,
	[Token(Token = "0x4000026")]
	AudioJob,
	[Token(Token = "0x4000027")]
	AudioUpdateJob,
	[Token(Token = "0x4000028")]
	Lighting,
	[Token(Token = "0x4000029")]
	GC,
	[Token(Token = "0x400002A")]
	VSync,
	[Token(Token = "0x400002B")]
	Memory,
	[Token(Token = "0x400002C")]
	Internal,
	[Token(Token = "0x400002D")]
	UI,
	[Token(Token = "0x400002E")]
	Build,
	[Token(Token = "0x400002F")]
	Input
}
