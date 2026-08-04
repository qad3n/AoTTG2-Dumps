// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.StackTrace
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Serializable]
[Token(Token = "0x20005E7")]
[ComVisible(true)]
[System.MonoTODO("Serialized objects are not compatible with .NET")]
public class StackTrace
{
	[Token(Token = "0x20005E8")]
	internal enum TraceFormat
	{
		[Token(Token = "0x4001A1D")]
		Normal,
		[Token(Token = "0x4001A1E")]
		TrailingNewLine,
		[Token(Token = "0x4001A1F")]
		NoResourceLookup
	}

	[Token(Token = "0x4001A15")]
	public const int METHODS_TO_SKIP = 0;

	[Token(Token = "0x4001A16")]
	private const string prefix = "  at ";

	[Token(Token = "0x4001A17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private StackFrame[] frames;

	[Token(Token = "0x4001A18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly StackTrace[] captured_traces;

	[Token(Token = "0x4001A19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool debug_info;

	[Token(Token = "0x4001A1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool isAotidSet;

	[Token(Token = "0x4001A1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static string aotid;

	[Token(Token = "0x17000711")]
	public virtual int FrameCount
	{
		[Token(Token = "0x6002E7C")]
		[Address(RVA = "0x3C7B040", Offset = "0x3C7B040", VA = "0x3C7B040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002E75")]
	[Address(RVA = "0x3C7AC50", Offset = "0x3C7AC50", VA = "0x3C7AC50")]
	public StackTrace()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002E76")]
	[Address(RVA = "0x3C7AED0", Offset = "0x3C7AED0", VA = "0x3C7AED0")]
	public StackTrace(bool fNeedFileInfo)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002E77")]
	[Address(RVA = "0x3C7AF00", Offset = "0x3C7AF00", VA = "0x3C7AF00")]
	public StackTrace(int skipFrames, bool fNeedFileInfo)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002E78")]
	[Address(RVA = "0x3C7AC70", Offset = "0x3C7AC70", VA = "0x3C7AC70")]
	private void init_frames(int skipFrames, bool fNeedFileInfo)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002E79")]
	[Address(RVA = "0x3C7AF30", Offset = "0x3C7AF30", VA = "0x3C7AF30")]
	private static extern StackFrame[] get_trace(Exception e, int skipFrames, bool fNeedFileInfo);

	[Token(Token = "0x6002E7A")]
	[Address(RVA = "0x3C7AF40", Offset = "0x3C7AF40", VA = "0x3C7AF40")]
	public StackTrace(Exception e, bool fNeedFileInfo)
	{
	}

	[Token(Token = "0x6002E7B")]
	[Address(RVA = "0x3C7AF50", Offset = "0x3C7AF50", VA = "0x3C7AF50")]
	public StackTrace(Exception e, int skipFrames, bool fNeedFileInfo)
	{
	}

	[Token(Token = "0x6002E7D")]
	[Address(RVA = "0x3C7B050", Offset = "0x3C7B050", VA = "0x3C7B050", Slot = "5")]
	public virtual StackFrame GetFrame(int index)
	{
		return null;
	}

	[Token(Token = "0x6002E7E")]
	[Address(RVA = "0x3C7B0B0", Offset = "0x3C7B0B0", VA = "0x3C7B0B0")]
	private static string GetAotId()
	{
		return null;
	}

	[Token(Token = "0x6002E7F")]
	[Address(RVA = "0x3C7B180", Offset = "0x3C7B180", VA = "0x3C7B180")]
	private bool AddFrames(StringBuilder sb, bool separator, out bool isAsync)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E80")]
	[Address(RVA = "0x3C7B650", Offset = "0x3C7B650", VA = "0x3C7B650")]
	private void GetFullNameForStackTrace(StringBuilder sb, MethodBase mi, bool needsNewLine, out bool skipped, out bool isAsync)
	{
	}

	[Token(Token = "0x6002E81")]
	[Address(RVA = "0x3C7BD10", Offset = "0x3C7BD10", VA = "0x3C7BD10")]
	private static void ConvertAsyncStateMachineMethod(ref MethodBase method, ref Type declaringType)
	{
	}

	[Token(Token = "0x6002E82")]
	[Address(RVA = "0x3C7C230", Offset = "0x3C7C230", VA = "0x3C7C230", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002E83")]
	[Address(RVA = "0x3C7C410", Offset = "0x3C7C410", VA = "0x3C7C410")]
	internal string ToString(TraceFormat traceFormat)
	{
		return null;
	}
}
