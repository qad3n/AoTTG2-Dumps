// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.StackTrace
// Update status: CHANGED in this game update
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
[Token(Token = "0x20005B9")]
[System.MonoTODO("Serialized objects are not compatible with .NET")]
[ComVisible(true)]
public class StackTrace
{
	[Token(Token = "0x20005BA")]
	internal enum TraceFormat
	{
		[Token(Token = "0x4001837")]
		Normal,
		[Token(Token = "0x4001838")]
		TrailingNewLine,
		[Token(Token = "0x4001839")]
		NoResourceLookup
	}

	[Token(Token = "0x4001831")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private StackFrame[] frames;

	[Token(Token = "0x4001832")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly StackTrace[] captured_traces;

	[Token(Token = "0x4001833")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool debug_info;

	[Token(Token = "0x4001834")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool isAotidSet;

	[Token(Token = "0x4001835")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static string aotid;

	[Token(Token = "0x1700069E")]
	public virtual int FrameCount
	{
		[Token(Token = "0x6002B89")]
		[Address(RVA = "0x1AC8420", Offset = "0x1AC6A20", VA = "0x181AC8420", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002B82")]
	[Address(RVA = "0x1AC83F0", Offset = "0x1AC69F0", VA = "0x181AC83F0")]
	public StackTrace()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002B83")]
	[Address(RVA = "0x1AC81B0", Offset = "0x1AC67B0", VA = "0x181AC81B0")]
	public StackTrace(bool fNeedFileInfo)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002B84")]
	[Address(RVA = "0x1AC8300", Offset = "0x1AC6900", VA = "0x181AC8300")]
	public StackTrace(int skipFrames, bool fNeedFileInfo)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002B85")]
	[Address(RVA = "0x1AC8450", Offset = "0x1AC6A50", VA = "0x181AC8450")]
	private void init_frames(int skipFrames, bool fNeedFileInfo)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002B86")]
	[Address(RVA = "0x1AC8440", Offset = "0x1AC6A40", VA = "0x181AC8440")]
	private static extern StackFrame[] get_trace(Exception e, int skipFrames, bool fNeedFileInfo);

	[Token(Token = "0x6002B87")]
	[Address(RVA = "0x1AC8340", Offset = "0x1AC6940", VA = "0x181AC8340")]
	public StackTrace(Exception e, bool fNeedFileInfo)
	{
	}

	[Token(Token = "0x6002B88")]
	[Address(RVA = "0x1AC81F0", Offset = "0x1AC67F0", VA = "0x181AC81F0")]
	public StackTrace(Exception e, int skipFrames, bool fNeedFileInfo)
	{
	}

	[Token(Token = "0x6002B8A")]
	[Address(RVA = "0x1AC7960", Offset = "0x1AC5F60", VA = "0x181AC7960", Slot = "5")]
	public virtual StackFrame GetFrame(int index)
	{
		return null;
	}

	[Token(Token = "0x6002B8B")]
	[Address(RVA = "0x1AC7870", Offset = "0x1AC5E70", VA = "0x181AC7870")]
	private static string GetAotId()
	{
		return null;
	}

	[Token(Token = "0x6002B8C")]
	[Address(RVA = "0x1AC70E0", Offset = "0x1AC56E0", VA = "0x181AC70E0")]
	private bool AddFrames(StringBuilder sb, bool separator, out bool isAsync)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B8D")]
	[Address(RVA = "0x1AC79C0", Offset = "0x1AC5FC0", VA = "0x181AC79C0")]
	private void GetFullNameForStackTrace(StringBuilder sb, MethodBase mi, bool needsNewLine, out bool skipped, out bool isAsync)
	{
	}

	[Token(Token = "0x6002B8E")]
	[Address(RVA = "0x1AC75D0", Offset = "0x1AC5BD0", VA = "0x181AC75D0")]
	private static void ConvertAsyncStateMachineMethod(ref MethodBase method, ref Type declaringType)
	{
	}

	[Token(Token = "0x6002B8F")]
	[Address(RVA = "0x1AC8020", Offset = "0x1AC6620", VA = "0x181AC8020", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002B90")]
	[Address(RVA = "0x1AC8190", Offset = "0x1AC6790", VA = "0x181AC8190")]
	internal string ToString(TraceFormat traceFormat)
	{
		return null;
	}
}
