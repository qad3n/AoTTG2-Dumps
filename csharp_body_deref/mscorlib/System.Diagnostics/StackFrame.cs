// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.StackFrame
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x20005E6")]
[System.MonoTODO("Serialized objects are not compatible with MS.NET")]
[ComVisible(true)]
public class StackFrame
{
	[Token(Token = "0x4001A0B")]
	public const int OFFSET_UNKNOWN = -1;

	[Token(Token = "0x4001A0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int ilOffset;

	[Token(Token = "0x4001A0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int nativeOffset;

	[Token(Token = "0x4001A0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private long methodAddress;

	[Token(Token = "0x4001A0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private uint methodIndex;

	[Token(Token = "0x4001A10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private MethodBase methodBase;

	[Token(Token = "0x4001A11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string fileName;

	[Token(Token = "0x4001A12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private int lineNumber;

	[Token(Token = "0x4001A13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private int columnNumber;

	[Token(Token = "0x4001A14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string internalMethodName;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002E68")]
	[Address(RVA = "0x3C7A850", Offset = "0x3C7A850", VA = "0x3C7A850")]
	private static extern bool get_frame_info(int skip, bool needFileInfo, out MethodBase method, out int iloffset, out int native_offset, out string file, out int line, out int column);

	[Token(Token = "0x6002E69")]
	[Address(RVA = "0x3C7A860", Offset = "0x3C7A860", VA = "0x3C7A860")]
	public StackFrame()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002E6A")]
	[Address(RVA = "0x3C7A8A0", Offset = "0x3C7A8A0", VA = "0x3C7A8A0")]
	public StackFrame(int skipFrames, bool fNeedFileInfo)
	{
	}

	[Token(Token = "0x6002E6B")]
	[Address(RVA = "0x3C7A8F0", Offset = "0x3C7A8F0", VA = "0x3C7A8F0", Slot = "4")]
	public virtual int GetFileLineNumber()
	{
		return default(int);
	}

	[Token(Token = "0x6002E6C")]
	[Address(RVA = "0x3C7A900", Offset = "0x3C7A900", VA = "0x3C7A900", Slot = "5")]
	public virtual string GetFileName()
	{
		return null;
	}

	[Token(Token = "0x6002E6D")]
	[Address(RVA = "0x3C7A910", Offset = "0x3C7A910", VA = "0x3C7A910")]
	internal string GetSecureFileName()
	{
		return null;
	}

	[Token(Token = "0x6002E6E")]
	[Address(RVA = "0x3C7A9E0", Offset = "0x3C7A9E0", VA = "0x3C7A9E0", Slot = "6")]
	public virtual int GetILOffset()
	{
		return default(int);
	}

	[Token(Token = "0x6002E6F")]
	[Address(RVA = "0x3C7A9F0", Offset = "0x3C7A9F0", VA = "0x3C7A9F0", Slot = "7")]
	public virtual MethodBase GetMethod()
	{
		return null;
	}

	[Token(Token = "0x6002E70")]
	[Address(RVA = "0x3C7AA00", Offset = "0x3C7AA00", VA = "0x3C7AA00", Slot = "8")]
	public virtual int GetNativeOffset()
	{
		return default(int);
	}

	[Token(Token = "0x6002E71")]
	[Address(RVA = "0x3C7AA10", Offset = "0x3C7AA10", VA = "0x3C7AA10")]
	internal long GetMethodAddress()
	{
		return default(long);
	}

	[Token(Token = "0x6002E72")]
	[Address(RVA = "0x3C7AA20", Offset = "0x3C7AA20", VA = "0x3C7AA20")]
	internal uint GetMethodIndex()
	{
		return default(uint);
	}

	[Token(Token = "0x6002E73")]
	[Address(RVA = "0x3C7AA30", Offset = "0x3C7AA30", VA = "0x3C7AA30")]
	internal string GetInternalMethodName()
	{
		return null;
	}

	[Token(Token = "0x6002E74")]
	[Address(RVA = "0x3C7AA40", Offset = "0x3C7AA40", VA = "0x3C7AA40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
