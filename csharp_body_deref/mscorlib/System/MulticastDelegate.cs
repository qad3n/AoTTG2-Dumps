// ==================== AoTTG2 cross-reference ====================
// Type: System.MulticastDelegate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000199")]
[ComVisible(true)]
public abstract class MulticastDelegate : Delegate
{
	[Token(Token = "0x4000679")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Delegate[] delegates;

	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x5514BF0", Offset = "0x5513BF0", VA = "0x5514BF0", Slot = "8")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x5514C00", Offset = "0x5513C00", VA = "0x5514C00", Slot = "0")]
	public sealed override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FFB")]
	[Address(RVA = "0x5514D00", Offset = "0x5513D00", VA = "0x5514D00", Slot = "2")]
	public sealed override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x5514D70", Offset = "0x5513D70", VA = "0x5514D70", Slot = "7")]
	protected override MethodInfo GetMethodImpl()
	{
		return null;
	}

	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x5514DD0", Offset = "0x5513DD0", VA = "0x5514DD0", Slot = "9")]
	public sealed override Delegate[] GetInvocationList()
	{
		return null;
	}

	[Token(Token = "0x6000FFE")]
	[Address(RVA = "0x5514EB0", Offset = "0x5513EB0", VA = "0x5514EB0", Slot = "10")]
	protected sealed override Delegate CombineImpl(Delegate follow)
	{
		return null;
	}

	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x55151E0", Offset = "0x55141E0", VA = "0x55151E0")]
	private int LastIndexOf(Delegate[] haystack, Delegate[] needle)
	{
		return default(int);
	}

	[Token(Token = "0x6001000")]
	[Address(RVA = "0x5515310", Offset = "0x5514310", VA = "0x5515310", Slot = "11")]
	protected sealed override Delegate RemoveImpl(Delegate value)
	{
		return null;
	}
}
