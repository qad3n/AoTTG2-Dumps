// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.MarshalAsAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200045D")]
[AttributeUsage(AttributeTargets.Field | AttributeTargets.Parameter | AttributeTargets.ReturnValue, Inherited = false)]
[ComVisible(true)]
public sealed class MarshalAsAttribute : Attribute
{
	[Token(Token = "0x400123B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public string MarshalCookie;

	[Token(Token = "0x400123C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[ComVisible(true)]
	public string MarshalType;

	[Token(Token = "0x400123D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[ComVisible(true)]
	public Type MarshalTypeRef;

	[Token(Token = "0x400123E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public Type SafeArrayUserDefinedSubType;

	[Token(Token = "0x400123F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private UnmanagedType utype;

	[Token(Token = "0x4001240")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	public UnmanagedType ArraySubType;

	[Token(Token = "0x4001241")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public VarEnum SafeArraySubType;

	[Token(Token = "0x4001242")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	public int SizeConst;

	[Token(Token = "0x4001243")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public int IidParameterIndex;

	[Token(Token = "0x4001244")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	public short SizeParamIndex;

	[Token(Token = "0x17000466")]
	public UnmanagedType Value
	{
		[Token(Token = "0x600228E")]
		[Address(RVA = "0x53C7D40", Offset = "0x53C6D40", VA = "0x53C7D40")]
		get
		{
			return default(UnmanagedType);
		}
	}

	[Token(Token = "0x600228D")]
	[Address(RVA = "0x53C7D20", Offset = "0x53C6D20", VA = "0x53C7D20")]
	public MarshalAsAttribute(UnmanagedType unmanagedType)
	{
	}

	[Token(Token = "0x600228F")]
	[Address(RVA = "0x53C7D50", Offset = "0x53C6D50", VA = "0x53C7D50")]
	internal MarshalAsAttribute Copy()
	{
		return null;
	}
}
