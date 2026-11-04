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
[Token(Token = "0x20001C1")]
[ComVisible(true)]
public abstract class MulticastDelegate : Delegate
{
	[Token(Token = "0x400071B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Delegate[] delegates;

	[Token(Token = "0x6001022")]
	[Address(RVA = "0x1B80090", Offset = "0x1B7E690", VA = "0x181B80090", Slot = "8")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001023")]
	[Address(RVA = "0x1B86B90", Offset = "0x1B85190", VA = "0x181B86B90", Slot = "0")]
	public sealed override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001024")]
	[Address(RVA = "0x1B7FE50", Offset = "0x1B7E450", VA = "0x181B7FE50", Slot = "2")]
	public sealed override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001025")]
	[Address(RVA = "0x1B86F30", Offset = "0x1B85530", VA = "0x181B86F30", Slot = "7")]
	protected override MethodInfo GetMethodImpl()
	{
		return null;
	}

	[Token(Token = "0x6001026")]
	[Address(RVA = "0x1B86E40", Offset = "0x1B85440", VA = "0x181B86E40", Slot = "9")]
	public sealed override Delegate[] GetInvocationList()
	{
		return null;
	}

	[Token(Token = "0x6001027")]
	[Address(RVA = "0x1B867E0", Offset = "0x1B84DE0", VA = "0x181B867E0", Slot = "10")]
	protected sealed override Delegate CombineImpl(Delegate follow)
	{
		return null;
	}

	[Token(Token = "0x6001028")]
	[Address(RVA = "0x1B870A0", Offset = "0x1B856A0", VA = "0x181B870A0")]
	private int LastIndexOf(Delegate[] haystack, Delegate[] needle)
	{
		return default(int);
	}

	[Token(Token = "0x6001029")]
	[Address(RVA = "0x1B871C0", Offset = "0x1B857C0", VA = "0x181B871C0", Slot = "11")]
	protected sealed override Delegate RemoveImpl(Delegate value)
	{
		return null;
	}
}
