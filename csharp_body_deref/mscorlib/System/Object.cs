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
[Token(Token = "0x200019B")]
[ComVisible(true)]
[ClassInterface(ClassInterfaceType.AutoDual)]
public class Object
{
	[Token(Token = "0x6001004")]
	[Address(RVA = "0x5515700", Offset = "0x5514700", VA = "0x5515700", Slot = "0")]
	public virtual bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001005")]
	[Address(RVA = "0x5515710", Offset = "0x5514710", VA = "0x5515710")]
	public static bool Equals(object objA, object objB)
	{
		return default(bool);
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x5506160", Offset = "0x5505160", VA = "0x5506160")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public Object()
	{
	}

	[Token(Token = "0x6001007")]
	[Address(RVA = "0x5515740", Offset = "0x5514740", VA = "0x5515740", Slot = "1")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	~Object()
	{
	}

	[Token(Token = "0x6001008")]
	[Address(RVA = "0x5515750", Offset = "0x5514750", VA = "0x5515750", Slot = "2")]
	public virtual int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001009")]
	[Address(RVA = "0x55068E0", Offset = "0x55058E0", VA = "0x55068E0")]
	public extern Type GetType();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600100A")]
	[Address(RVA = "0x550F3A0", Offset = "0x550E3A0", VA = "0x550F3A0")]
	protected extern object MemberwiseClone();

	[Token(Token = "0x600100B")]
	[Address(RVA = "0x5515770", Offset = "0x5514770", VA = "0x5515770", Slot = "3")]
	public virtual string ToString()
	{
		return null;
	}

	[Token(Token = "0x600100C")]
	[Address(RVA = "0x55157A0", Offset = "0x55147A0", VA = "0x55157A0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static bool ReferenceEquals(object objA, object objB)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600100D")]
	[Address(RVA = "0x5515760", Offset = "0x5514760", VA = "0x5515760")]
	internal static extern int InternalGetHashCode(object o);

	[Token(Token = "0x600100E")]
	[Address(RVA = "0x55157B0", Offset = "0x55147B0", VA = "0x55157B0")]
	private void FieldGetter(string typeName, string fieldName, ref object val)
	{
	}

	[Token(Token = "0x600100F")]
	[Address(RVA = "0x55157C0", Offset = "0x55147C0", VA = "0x55157C0")]
	private void FieldSetter(string typeName, string fieldName, object val)
	{
	}
}
