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
[Token(Token = "0x20001C3")]
[ComVisible(true)]
[ClassInterface(ClassInterfaceType.AutoDual)]
public class Object
{
	[Token(Token = "0x600102D")]
	[Address(RVA = "0x841F20", Offset = "0x840520", VA = "0x180841F20", Slot = "0")]
	public virtual bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x1A41670", Offset = "0x1A3FC70", VA = "0x181A41670")]
	public static bool Equals(object objA, object objB)
	{
		return default(bool);
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public Object()
	{
	}

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "1")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	~Object()
	{
	}

	[Token(Token = "0x6001031")]
	[Address(RVA = "0x1B87700", Offset = "0x1B85D00", VA = "0x181B87700", Slot = "2")]
	public virtual int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001032")]
	[Address(RVA = "0x1B87710", Offset = "0x1B85D10", VA = "0x181B87710")]
	public extern Type GetType();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001033")]
	[Address(RVA = "0x1B7E6B0", Offset = "0x1B7CCB0", VA = "0x181B7E6B0")]
	protected extern object MemberwiseClone();

	[Token(Token = "0x6001034")]
	[Address(RVA = "0x1B87720", Offset = "0x1B85D20", VA = "0x181B87720", Slot = "3")]
	public virtual string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001035")]
	[Address(RVA = "0x841F20", Offset = "0x840520", VA = "0x180841F20")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static bool ReferenceEquals(object objA, object objB)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001036")]
	[Address(RVA = "0x1B87700", Offset = "0x1B85D00", VA = "0x181B87700")]
	internal static extern int InternalGetHashCode(object o);

	[Token(Token = "0x6001037")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void FieldGetter(string typeName, string fieldName, ref object val)
	{
	}

	[Token(Token = "0x6001038")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void FieldSetter(string typeName, string fieldName, object val)
	{
	}
}
