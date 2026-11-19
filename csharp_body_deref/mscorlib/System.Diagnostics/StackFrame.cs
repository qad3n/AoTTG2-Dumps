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
[Token(Token = "0x2000593")]
[System.MonoTODO("Serialized objects are not compatible with MS.NET")]
[ComVisible(true)]
public class StackFrame
{
	[Token(Token = "0x400178E")]
	public const int OFFSET_UNKNOWN = -1;

	[Token(Token = "0x400178F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int ilOffset;

	[Token(Token = "0x4001790")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int nativeOffset;

	[Token(Token = "0x4001791")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private long methodAddress;

	[Token(Token = "0x4001792")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private uint methodIndex;

	[Token(Token = "0x4001793")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private MethodBase methodBase;

	[Token(Token = "0x4001794")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string fileName;

	[Token(Token = "0x4001795")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private int lineNumber;

	[Token(Token = "0x4001796")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private int columnNumber;

	[Token(Token = "0x4001797")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string internalMethodName;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002B54")]
	[Address(RVA = "0x544D8D0", Offset = "0x544C8D0", VA = "0x544D8D0")]
	private static extern bool get_frame_info(int skip, bool needFileInfo, out MethodBase method, out int iloffset, out int native_offset, out string file, out int line, out int column);

	[Token(Token = "0x6002B55")]
	[Address(RVA = "0x544D8E0", Offset = "0x544C8E0", VA = "0x544D8E0")]
	public StackFrame()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002B56")]
	[Address(RVA = "0x544D930", Offset = "0x544C930", VA = "0x544D930")]
	public StackFrame(int skipFrames, bool fNeedFileInfo)
	{
	}

	[Token(Token = "0x6002B57")]
	[Address(RVA = "0x544D990", Offset = "0x544C990", VA = "0x544D990", Slot = "4")]
	public virtual int GetFileLineNumber()
	{
		return default(int);
	}

	[Token(Token = "0x6002B58")]
	[Address(RVA = "0x544D9A0", Offset = "0x544C9A0", VA = "0x544D9A0", Slot = "5")]
	public virtual string GetFileName()
	{
		return null;
	}

	[Token(Token = "0x6002B59")]
	[Address(RVA = "0x544D9B0", Offset = "0x544C9B0", VA = "0x544D9B0")]
	internal string GetSecureFileName()
	{
		return null;
	}

	[Token(Token = "0x6002B5A")]
	[Address(RVA = "0x544DA80", Offset = "0x544CA80", VA = "0x544DA80", Slot = "6")]
	public virtual int GetILOffset()
	{
		return default(int);
	}

	[Token(Token = "0x6002B5B")]
	[Address(RVA = "0x544DA90", Offset = "0x544CA90", VA = "0x544DA90", Slot = "7")]
	public virtual MethodBase GetMethod()
	{
		return null;
	}

	[Token(Token = "0x6002B5C")]
	[Address(RVA = "0x544DAA0", Offset = "0x544CAA0", VA = "0x544DAA0", Slot = "8")]
	public virtual int GetNativeOffset()
	{
		return default(int);
	}

	[Token(Token = "0x6002B5D")]
	[Address(RVA = "0x544DAB0", Offset = "0x544CAB0", VA = "0x544DAB0")]
	internal long GetMethodAddress()
	{
		return default(long);
	}

	[Token(Token = "0x6002B5E")]
	[Address(RVA = "0x544DAC0", Offset = "0x544CAC0", VA = "0x544DAC0")]
	internal uint GetMethodIndex()
	{
		return default(uint);
	}

	[Token(Token = "0x6002B5F")]
	[Address(RVA = "0x544DAD0", Offset = "0x544CAD0", VA = "0x544DAD0")]
	internal string GetInternalMethodName()
	{
		return null;
	}

	[Token(Token = "0x6002B60")]
	[Address(RVA = "0x544DAE0", Offset = "0x544CAE0", VA = "0x544DAE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
