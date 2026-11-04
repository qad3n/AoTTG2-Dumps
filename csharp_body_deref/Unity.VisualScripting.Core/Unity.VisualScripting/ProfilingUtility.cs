// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ProfilingUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000DE")]
public static class ProfilingUtility
{
	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object @lock;

	[Token(Token = "0x1700011A")]
	public static ProfiledSegment rootSegment
	{
		[Token(Token = "0x6000538")]
		[Address(RVA = "0x2DB9520", Offset = "0x2DB7B20", VA = "0x182DB9520")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000539")]
		[Address(RVA = "0x2DB95E0", Offset = "0x2DB7BE0", VA = "0x182DB95E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public static ProfiledSegment currentSegment
	{
		[Token(Token = "0x600053A")]
		[Address(RVA = "0x2DB94D0", Offset = "0x2DB7AD0", VA = "0x182DB94D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600053B")]
		[Address(RVA = "0x2DB9570", Offset = "0x2DB7B70", VA = "0x182DB9570")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x2DB9360", Offset = "0x2DB7960", VA = "0x182DB9360")]
	static ProfilingUtility()
	{
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x2DB9070", Offset = "0x2DB7670", VA = "0x182DB9070")]
	[Conditional("ENABLE_PROFILER")]
	public static void Clear()
	{
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	public static ProfilingScope SampleBlock(string name)
	{
		return default(ProfilingScope);
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x2DB8CB0", Offset = "0x2DB72B0", VA = "0x182DB8CB0")]
	[Conditional("ENABLE_PROFILER")]
	public static void BeginSample(string name)
	{
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x2DB91B0", Offset = "0x2DB77B0", VA = "0x182DB91B0")]
	[Conditional("ENABLE_PROFILER")]
	public static void EndSample()
	{
	}
}
