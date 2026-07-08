using System.Runtime.InteropServices;
using System.Runtime.Remoting;
using Il2CppDummyDll;

namespace System;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000190")]
[ComVisible(true)]
public abstract class MarshalByRefObject
{
	[NonSerialized]
	[Token(Token = "0x40006A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private object _identity;

	[Token(Token = "0x1700016E")]
	internal System.Runtime.Remoting.ServerIdentity ObjectIdentity
	{
		[Token(Token = "0x6000FAD")]
		[Address(RVA = "0x5027050", Offset = "0x5027050", VA = "0x5027050")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FAE")]
		[Address(RVA = "0x5027090", Offset = "0x5027090", VA = "0x5027090")]
		set
		{
		}
	}

	[Token(Token = "0x6000FAC")]
	[Address(RVA = "0x501F2E0", Offset = "0x501F2E0", VA = "0x501F2E0")]
	protected MarshalByRefObject()
	{
	}

	[Token(Token = "0x6000FAF")]
	[Address(RVA = "0x50270D0", Offset = "0x50270D0", VA = "0x50270D0", Slot = "4")]
	public virtual ObjRef CreateObjRef(Type requestedType)
	{
		return null;
	}

	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x5027110", Offset = "0x5027110", VA = "0x5027110", Slot = "5")]
	public virtual object InitializeLifetimeService()
	{
		return null;
	}
}
