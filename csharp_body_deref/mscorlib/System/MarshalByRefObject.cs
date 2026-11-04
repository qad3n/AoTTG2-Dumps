// ==================== AoTTG2 cross-reference ====================
// Type: System.MarshalByRefObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Remoting;
using Il2CppDummyDll;

namespace System;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x20001BB")]
[ComVisible(true)]
public abstract class MarshalByRefObject
{
	[NonSerialized]
	[Token(Token = "0x400070D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private object _identity;

	[Token(Token = "0x17000170")]
	internal System.Runtime.Remoting.ServerIdentity ObjectIdentity
	{
		[Token(Token = "0x6001004")]
		[Address(RVA = "0x1B82BF0", Offset = "0x1B811F0", VA = "0x181B82BF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001005")]
		[Address(RVA = "0x1B82C30", Offset = "0x1B81230", VA = "0x181B82C30")]
		set
		{
		}
	}

	[Token(Token = "0x6001003")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	protected MarshalByRefObject()
	{
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x1B82B70", Offset = "0x1B81170", VA = "0x181B82B70", Slot = "4")]
	public virtual ObjRef CreateObjRef(Type requestedType)
	{
		return null;
	}

	[Token(Token = "0x6001007")]
	[Address(RVA = "0x1B82BB0", Offset = "0x1B811B0", VA = "0x181B82BB0", Slot = "5")]
	public virtual object InitializeLifetimeService()
	{
		return null;
	}
}
