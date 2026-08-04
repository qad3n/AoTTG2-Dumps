// ==================== AoTTG2 cross-reference ====================
// Type: System.Object
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000198")]
[ComVisible(true)]
[ClassInterface(ClassInterfaceType.AutoDual)]
public class Object
{
	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x3D11EA0", Offset = "0x3D11EA0", VA = "0x3D11EA0", Slot = "0")]
	public virtual bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x3D11EB0", Offset = "0x3D11EB0", VA = "0x3D11EB0")]
	public static bool Equals(object objA, object objB)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x3D02900", Offset = "0x3D02900", VA = "0x3D02900")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public Object()
	{
	}

	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x3D11EE0", Offset = "0x3D11EE0", VA = "0x3D11EE0", Slot = "1")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	~Object()
	{
	}

	[Token(Token = "0x6000FDA")]
	[Address(RVA = "0x3D11EF0", Offset = "0x3D11EF0", VA = "0x3D11EF0", Slot = "2")]
	public virtual int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDB")]
	[Address(RVA = "0x3D03110", Offset = "0x3D03110", VA = "0x3D03110")]
	public extern Type GetType();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDC")]
	[Address(RVA = "0x3D0B930", Offset = "0x3D0B930", VA = "0x3D0B930")]
	protected extern object MemberwiseClone();

	[Token(Token = "0x6000FDD")]
	[Address(RVA = "0x3D11F10", Offset = "0x3D11F10", VA = "0x3D11F10", Slot = "3")]
	public virtual string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000FDE")]
	[Address(RVA = "0x3D11F40", Offset = "0x3D11F40", VA = "0x3D11F40")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static bool ReferenceEquals(object objA, object objB)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDF")]
	[Address(RVA = "0x3D11F00", Offset = "0x3D11F00", VA = "0x3D11F00")]
	internal static extern int InternalGetHashCode(object o);

	[Token(Token = "0x6000FE0")]
	[Address(RVA = "0x3D11F50", Offset = "0x3D11F50", VA = "0x3D11F50")]
	private void FieldGetter(string typeName, string fieldName, ref object val)
	{
	}

	[Token(Token = "0x6000FE1")]
	[Address(RVA = "0x3D11F60", Offset = "0x3D11F60", VA = "0x3D11F60")]
	private void FieldSetter(string typeName, string fieldName, object val)
	{
	}
}
