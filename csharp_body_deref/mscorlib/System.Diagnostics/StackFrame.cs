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
[Token(Token = "0x20005B8")]
[System.MonoTODO("Serialized objects are not compatible with MS.NET")]
[ComVisible(true)]
public class StackFrame
{
	[Token(Token = "0x4001827")]
	public const int OFFSET_UNKNOWN = -1;

	[Token(Token = "0x4001828")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int ilOffset;

	[Token(Token = "0x4001829")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int nativeOffset;

	[Token(Token = "0x400182A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private long methodAddress;

	[Token(Token = "0x400182B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private uint methodIndex;

	[Token(Token = "0x400182C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private MethodBase methodBase;

	[Token(Token = "0x400182D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string fileName;

	[Token(Token = "0x400182E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private int lineNumber;

	[Token(Token = "0x400182F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private int columnNumber;

	[Token(Token = "0x4001830")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string internalMethodName;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002B75")]
	[Address(RVA = "0x1AC70D0", Offset = "0x1AC56D0", VA = "0x181AC70D0")]
	private static extern bool get_frame_info(int skip, bool needFileInfo, out MethodBase method, out int iloffset, out int native_offset, out string file, out int line, out int column);

	[Token(Token = "0x6002B76")]
	[Address(RVA = "0x1AC7070", Offset = "0x1AC5670", VA = "0x181AC7070")]
	public StackFrame()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002B77")]
	[Address(RVA = "0x1AC7000", Offset = "0x1AC5600", VA = "0x181AC7000")]
	public StackFrame(int skipFrames, bool fNeedFileInfo)
	{
	}

	[Token(Token = "0x6002B78")]
	[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0", Slot = "4")]
	public virtual int GetFileLineNumber()
	{
		return default(int);
	}

	[Token(Token = "0x6002B79")]
	[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "5")]
	public virtual string GetFileName()
	{
		return null;
	}

	[Token(Token = "0x6002B7A")]
	[Address(RVA = "0x1AC6DA0", Offset = "0x1AC53A0", VA = "0x181AC6DA0")]
	internal string GetSecureFileName()
	{
		return null;
	}

	[Token(Token = "0x6002B7B")]
	[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "6")]
	public virtual int GetILOffset()
	{
		return default(int);
	}

	[Token(Token = "0x6002B7C")]
	[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "7")]
	public virtual MethodBase GetMethod()
	{
		return null;
	}

	[Token(Token = "0x6002B7D")]
	[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0", Slot = "8")]
	public virtual int GetNativeOffset()
	{
		return default(int);
	}

	[Token(Token = "0x6002B7E")]
	[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
	internal long GetMethodAddress()
	{
		return default(long);
	}

	[Token(Token = "0x6002B7F")]
	[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
	internal uint GetMethodIndex()
	{
		return default(uint);
	}

	[Token(Token = "0x6002B80")]
	[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
	internal string GetInternalMethodName()
	{
		return null;
	}

	[Token(Token = "0x6002B81")]
	[Address(RVA = "0x1AC6E00", Offset = "0x1AC5400", VA = "0x181AC6E00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
