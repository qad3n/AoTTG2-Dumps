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
	[Address(RVA = "0x502C380", Offset = "0x502C380", VA = "0x502C380", Slot = "0")]
	public virtual bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x502C390", Offset = "0x502C390", VA = "0x502C390")]
	public static bool Equals(object objA, object objB)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x501CDE0", Offset = "0x501CDE0", VA = "0x501CDE0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public Object()
	{
	}

	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x502C3C0", Offset = "0x502C3C0", VA = "0x502C3C0", Slot = "1")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	~Object()
	{
	}

	[Token(Token = "0x6000FDA")]
	[Address(RVA = "0x502C3D0", Offset = "0x502C3D0", VA = "0x502C3D0", Slot = "2")]
	public virtual int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDB")]
	[Address(RVA = "0x501D5F0", Offset = "0x501D5F0", VA = "0x501D5F0")]
	public extern Type GetType();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDC")]
	[Address(RVA = "0x5025E10", Offset = "0x5025E10", VA = "0x5025E10")]
	protected extern object MemberwiseClone();

	[Token(Token = "0x6000FDD")]
	[Address(RVA = "0x502C3F0", Offset = "0x502C3F0", VA = "0x502C3F0", Slot = "3")]
	public virtual string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000FDE")]
	[Address(RVA = "0x502C420", Offset = "0x502C420", VA = "0x502C420")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static bool ReferenceEquals(object objA, object objB)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDF")]
	[Address(RVA = "0x502C3E0", Offset = "0x502C3E0", VA = "0x502C3E0")]
	internal static extern int InternalGetHashCode(object o);

	[Token(Token = "0x6000FE0")]
	[Address(RVA = "0x502C430", Offset = "0x502C430", VA = "0x502C430")]
	private void FieldGetter(string typeName, string fieldName, ref object val)
	{
	}

	[Token(Token = "0x6000FE1")]
	[Address(RVA = "0x502C440", Offset = "0x502C440", VA = "0x502C440")]
	private void FieldSetter(string typeName, string fieldName, object val)
	{
	}
}
