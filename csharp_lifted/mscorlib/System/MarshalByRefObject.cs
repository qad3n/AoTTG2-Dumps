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
[Token(Token = "0x2000193")]
[ComVisible(true)]
public abstract class MarshalByRefObject
{
	[NonSerialized]
	[Token(Token = "0x400066B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private object _identity;

	[Token(Token = "0x1700016F")]
	internal System.Runtime.Remoting.ServerIdentity ObjectIdentity
	{
		[Token(Token = "0x6000FDB")]
		[Address(RVA = "0x5510570", Offset = "0x550F570", VA = "0x5510570")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FDC")]
		[Address(RVA = "0x55105B0", Offset = "0x550F5B0", VA = "0x55105B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000FDA")]
	[Address(RVA = "0x5508640", Offset = "0x5507640", VA = "0x5508640")]
	protected MarshalByRefObject()
	{
	}

	[Token(Token = "0x6000FDD")]
	[Address(RVA = "0x55105F0", Offset = "0x550F5F0", VA = "0x55105F0", Slot = "4")]
	public virtual ObjRef CreateObjRef(Type requestedType)
	{
		return null;
	}

	[Token(Token = "0x6000FDE")]
	[Address(RVA = "0x5510630", Offset = "0x550F630", VA = "0x5510630", Slot = "5")]
	public virtual object InitializeLifetimeService()
	{
		return null;
	}
}
