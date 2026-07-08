using System.Reflection;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000196")]
[ComVisible(true)]
public abstract class MulticastDelegate : Delegate
{
	[Token(Token = "0x40006B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Delegate[] delegates;

	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x502B8D0", Offset = "0x502B8D0", VA = "0x502B8D0", Slot = "8")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x502B8E0", Offset = "0x502B8E0", VA = "0x502B8E0", Slot = "0")]
	public sealed override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x502BA10", Offset = "0x502BA10", VA = "0x502BA10", Slot = "2")]
	public sealed override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x502BA20", Offset = "0x502BA20", VA = "0x502BA20", Slot = "7")]
	protected override MethodInfo GetMethodImpl()
	{
		return null;
	}

	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x502BA80", Offset = "0x502BA80", VA = "0x502BA80", Slot = "9")]
	public sealed override Delegate[] GetInvocationList()
	{
		return null;
	}

	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x502BB60", Offset = "0x502BB60", VA = "0x502BB60", Slot = "10")]
	protected sealed override Delegate CombineImpl(Delegate follow)
	{
		return null;
	}

	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x502BE80", Offset = "0x502BE80", VA = "0x502BE80")]
	private int LastIndexOf(Delegate[] haystack, Delegate[] needle)
	{
		return default(int);
	}

	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x502BFA0", Offset = "0x502BFA0", VA = "0x502BFA0", Slot = "11")]
	protected sealed override Delegate RemoveImpl(Delegate value)
	{
		return null;
	}
}
