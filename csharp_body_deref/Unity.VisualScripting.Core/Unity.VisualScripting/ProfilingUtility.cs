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
		[Address(RVA = "0x67A8BC0", Offset = "0x67A7BC0", VA = "0x67A8BC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000539")]
		[Address(RVA = "0x67A8C30", Offset = "0x67A7C30", VA = "0x67A8C30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public static ProfiledSegment currentSegment
	{
		[Token(Token = "0x600053A")]
		[Address(RVA = "0x67A8C90", Offset = "0x67A7C90", VA = "0x67A8C90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600053B")]
		[Address(RVA = "0x67A8D00", Offset = "0x67A7D00", VA = "0x67A8D00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x67A8A60", Offset = "0x67A7A60", VA = "0x67A8A60")]
	static ProfilingUtility()
	{
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x67A8D60", Offset = "0x67A7D60", VA = "0x67A8D60")]
	[Conditional("ENABLE_PROFILER")]
	public static void Clear()
	{
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x67A8EA0", Offset = "0x67A7EA0", VA = "0x67A8EA0")]
	public static ProfilingScope SampleBlock(string name)
	{
		return default(ProfilingScope);
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x67A8EB0", Offset = "0x67A7EB0", VA = "0x67A8EB0")]
	[Conditional("ENABLE_PROFILER")]
	public static void BeginSample(string name)
	{
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x67A92E0", Offset = "0x67A82E0", VA = "0x67A92E0")]
	[Conditional("ENABLE_PROFILER")]
	public static void EndSample()
	{
	}
}
