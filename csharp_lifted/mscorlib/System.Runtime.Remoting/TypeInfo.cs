// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.TypeInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Serializable]
[Token(Token = "0x200035D")]
internal class TypeInfo : IRemotingTypeInfo
{
	[Token(Token = "0x4000E2B")]
	[FieldOffset(Offset = "0x10")]
	private string serverType;

	[Token(Token = "0x4000E2C")]
	[FieldOffset(Offset = "0x18")]
	private string[] serverHierarchy;

	[Token(Token = "0x4000E2D")]
	[FieldOffset(Offset = "0x20")]
	private string[] interfacesImplemented;

	[Token(Token = "0x1700034E")]
	public string TypeName
	{
		[Token(Token = "0x6001D20")]
		[Address(RVA = "0x53792E0", Offset = "0x53782E0", VA = "0x53792E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D1F")]
	[Address(RVA = "0x5369E40", Offset = "0x5368E40", VA = "0x5369E40")]
	public TypeInfo(Type type)
	{
	}

	[Token(Token = "0x6001D21")]
	[Address(RVA = "0x53792F0", Offset = "0x53782F0", VA = "0x53792F0", Slot = "5")]
	public bool CanCastTo(Type fromType, object o)
	{
		return default(bool);
	}
}
