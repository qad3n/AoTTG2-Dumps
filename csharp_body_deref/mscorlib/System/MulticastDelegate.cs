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
[Token(Token = "0x2000196")]
[ComVisible(true)]
public abstract class MulticastDelegate : Delegate
{
	[Token(Token = "0x40006B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Delegate[] delegates;

	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x3D113F0", Offset = "0x3D113F0", VA = "0x3D113F0", Slot = "8")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x3D11400", Offset = "0x3D11400", VA = "0x3D11400", Slot = "0")]
	public sealed override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x3D11530", Offset = "0x3D11530", VA = "0x3D11530", Slot = "2")]
	public sealed override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x3D11540", Offset = "0x3D11540", VA = "0x3D11540", Slot = "7")]
	protected override MethodInfo GetMethodImpl()
	{
		return null;
	}

	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x3D115A0", Offset = "0x3D115A0", VA = "0x3D115A0", Slot = "9")]
	public sealed override Delegate[] GetInvocationList()
	{
		return null;
	}

	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x3D11680", Offset = "0x3D11680", VA = "0x3D11680", Slot = "10")]
	protected sealed override Delegate CombineImpl(Delegate follow)
	{
		return null;
	}

	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x3D119A0", Offset = "0x3D119A0", VA = "0x3D119A0")]
	private int LastIndexOf(Delegate[] haystack, Delegate[] needle)
	{
		return default(int);
	}

	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x3D11AC0", Offset = "0x3D11AC0", VA = "0x3D11AC0", Slot = "11")]
	protected sealed override Delegate RemoveImpl(Delegate value)
	{
		return null;
	}
}
