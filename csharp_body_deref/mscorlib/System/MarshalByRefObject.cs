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
		[Address(RVA = "0x3D0CB70", Offset = "0x3D0CB70", VA = "0x3D0CB70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FAE")]
		[Address(RVA = "0x3D0CBB0", Offset = "0x3D0CBB0", VA = "0x3D0CBB0")]
		set
		{
		}
	}

	[Token(Token = "0x6000FAC")]
	[Address(RVA = "0x3D04E00", Offset = "0x3D04E00", VA = "0x3D04E00")]
	protected MarshalByRefObject()
	{
	}

	[Token(Token = "0x6000FAF")]
	[Address(RVA = "0x3D0CBF0", Offset = "0x3D0CBF0", VA = "0x3D0CBF0", Slot = "4")]
	public virtual ObjRef CreateObjRef(Type requestedType)
	{
		return null;
	}

	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x3D0CC30", Offset = "0x3D0CC30", VA = "0x3D0CC30", Slot = "5")]
	public virtual object InitializeLifetimeService()
	{
		return null;
	}
}
