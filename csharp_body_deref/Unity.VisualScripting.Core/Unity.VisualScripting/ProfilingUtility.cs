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
	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object @lock;

	[Token(Token = "0x17000117")]
	public static ProfiledSegment rootSegment
	{
		[Token(Token = "0x600052E")]
		[Address(RVA = "0x4CBA0C0", Offset = "0x4CBA0C0", VA = "0x4CBA0C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600052F")]
		[Address(RVA = "0x4CBA130", Offset = "0x4CBA130", VA = "0x4CBA130")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000118")]
	public static ProfiledSegment currentSegment
	{
		[Token(Token = "0x6000530")]
		[Address(RVA = "0x4CBA190", Offset = "0x4CBA190", VA = "0x4CBA190")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000531")]
		[Address(RVA = "0x4CBA200", Offset = "0x4CBA200", VA = "0x4CBA200")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x4CB9F60", Offset = "0x4CB9F60", VA = "0x4CB9F60")]
	static ProfilingUtility()
	{
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x4CBA260", Offset = "0x4CBA260", VA = "0x4CBA260")]
	[Conditional("ENABLE_PROFILER")]
	public static void Clear()
	{
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x4CBA3A0", Offset = "0x4CBA3A0", VA = "0x4CBA3A0")]
	public static ProfilingScope SampleBlock(string name)
	{
		return default(ProfilingScope);
	}

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x4CBA3B0", Offset = "0x4CBA3B0", VA = "0x4CBA3B0")]
	[Conditional("ENABLE_PROFILER")]
	public static void BeginSample(string name)
	{
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x4CBA850", Offset = "0x4CBA850", VA = "0x4CBA850")]
	[Conditional("ENABLE_PROFILER")]
	public static void EndSample()
	{
	}
}
