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
[Token(Token = "0x2000594")]
[System.MonoTODO("Serialized objects are not compatible with .NET")]
[ComVisible(true)]
public class StackTrace
{
	[Token(Token = "0x2000595")]
	internal enum TraceFormat
	{
		[Token(Token = "0x400179E")]
		Normal,
		[Token(Token = "0x400179F")]
		TrailingNewLine,
		[Token(Token = "0x40017A0")]
		NoResourceLookup
	}

	[Token(Token = "0x4001798")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private StackFrame[] frames;

	[Token(Token = "0x4001799")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly StackTrace[] captured_traces;

	[Token(Token = "0x400179A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool debug_info;

	[Token(Token = "0x400179B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool isAotidSet;

	[Token(Token = "0x400179C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static string aotid;

	[Token(Token = "0x1700069F")]
	public virtual int FrameCount
	{
		[Token(Token = "0x6002B68")]
		[Address(RVA = "0x544E0D0", Offset = "0x544D0D0", VA = "0x544E0D0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002B61")]
	[Address(RVA = "0x544DCE0", Offset = "0x544CCE0", VA = "0x544DCE0")]
	public StackTrace()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002B62")]
	[Address(RVA = "0x544DF60", Offset = "0x544CF60", VA = "0x544DF60")]
	public StackTrace(bool fNeedFileInfo)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002B63")]
	[Address(RVA = "0x544DF90", Offset = "0x544CF90", VA = "0x544DF90")]
	public StackTrace(int skipFrames, bool fNeedFileInfo)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002B64")]
	[Address(RVA = "0x544DD00", Offset = "0x544CD00", VA = "0x544DD00")]
	private void init_frames(int skipFrames, bool fNeedFileInfo)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002B65")]
	[Address(RVA = "0x544DFC0", Offset = "0x544CFC0", VA = "0x544DFC0")]
	private static extern StackFrame[] get_trace(Exception e, int skipFrames, bool fNeedFileInfo);

	[Token(Token = "0x6002B66")]
	[Address(RVA = "0x544DFD0", Offset = "0x544CFD0", VA = "0x544DFD0")]
	public StackTrace(Exception e, bool fNeedFileInfo)
	{
	}

	[Token(Token = "0x6002B67")]
	[Address(RVA = "0x544DFE0", Offset = "0x544CFE0", VA = "0x544DFE0")]
	public StackTrace(Exception e, int skipFrames, bool fNeedFileInfo)
	{
	}

	[Token(Token = "0x6002B69")]
	[Address(RVA = "0x544E0E0", Offset = "0x544D0E0", VA = "0x544E0E0", Slot = "5")]
	public virtual StackFrame GetFrame(int index)
	{
		return null;
	}

	[Token(Token = "0x6002B6A")]
	[Address(RVA = "0x544E140", Offset = "0x544D140", VA = "0x544E140")]
	private static string GetAotId()
	{
		return null;
	}

	[Token(Token = "0x6002B6B")]
	[Address(RVA = "0x544E210", Offset = "0x544D210", VA = "0x544E210")]
	private bool AddFrames(StringBuilder sb, bool separator, out bool isAsync)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B6C")]
	[Address(RVA = "0x544E6D0", Offset = "0x544D6D0", VA = "0x544E6D0")]
	private void GetFullNameForStackTrace(StringBuilder sb, MethodBase mi, bool needsNewLine, out bool skipped, out bool isAsync)
	{
	}

	[Token(Token = "0x6002B6D")]
	[Address(RVA = "0x544EEC0", Offset = "0x544DEC0", VA = "0x544EEC0")]
	private static void ConvertAsyncStateMachineMethod(ref MethodBase method, ref Type declaringType)
	{
	}

	[Token(Token = "0x6002B6E")]
	[Address(RVA = "0x544F350", Offset = "0x544E350", VA = "0x544F350", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002B6F")]
	[Address(RVA = "0x544F510", Offset = "0x544E510", VA = "0x544F510")]
	internal string ToString(TraceFormat traceFormat)
	{
		return null;
	}
}
