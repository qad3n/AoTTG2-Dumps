// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.ObjectIDGenerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Serializable]
[Token(Token = "0x20003E6")]
[ComVisible(true)]
public class ObjectIDGenerator
{
	[Token(Token = "0x4000F4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal int m_currentCount;

	[Token(Token = "0x4000F4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	internal int m_currentSize;

	[Token(Token = "0x4000F4F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal long[] m_ids;

	[Token(Token = "0x4000F50")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal object[] m_objs;

	[Token(Token = "0x4000F51")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly int[] sizes;

	[Token(Token = "0x6001FC3")]
	[Address(RVA = "0x539F930", Offset = "0x539E930", VA = "0x539F930")]
	public ObjectIDGenerator()
	{
	}

	[Token(Token = "0x6001FC4")]
	[Address(RVA = "0x539FA10", Offset = "0x539EA10", VA = "0x539FA10")]
	private int FindElement(object obj, out bool found)
	{
		return default(int);
	}

	[Token(Token = "0x6001FC5")]
	[Address(RVA = "0x539FB30", Offset = "0x539EB30", VA = "0x539FB30", Slot = "4")]
	public virtual long GetId(object obj, out bool firstTime)
	{
		return default(long);
	}

	[Token(Token = "0x6001FC6")]
	[Address(RVA = "0x53A01A0", Offset = "0x539F1A0", VA = "0x53A01A0", Slot = "5")]
	public virtual long HasId(object obj, out bool firstTime)
	{
		return default(long);
	}

	[Token(Token = "0x6001FC7")]
	[Address(RVA = "0x539FD80", Offset = "0x539ED80", VA = "0x539FD80")]
	private void Rehash()
	{
	}
}
