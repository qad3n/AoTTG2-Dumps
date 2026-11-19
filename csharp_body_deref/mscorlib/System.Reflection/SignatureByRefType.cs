// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.SignatureByRefType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004FE")]
internal sealed class SignatureByRefType : System.Reflection.SignatureHasElementType
{
	[Token(Token = "0x170004E7")]
	public sealed override bool IsSZArray
	{
		[Token(Token = "0x600250D")]
		[Address(RVA = "0x53DC0B0", Offset = "0x53DB0B0", VA = "0x53DC0B0", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004E8")]
	public sealed override bool IsVariableBoundArray
	{
		[Token(Token = "0x600250E")]
		[Address(RVA = "0x53DC0C0", Offset = "0x53DB0C0", VA = "0x53DC0C0", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004E9")]
	protected sealed override string Suffix
	{
		[Token(Token = "0x6002510")]
		[Address(RVA = "0x53DC120", Offset = "0x53DB120", VA = "0x53DC120", Slot = "136")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002509")]
	[Address(RVA = "0x53DC030", Offset = "0x53DB030", VA = "0x53DC030")]
	internal SignatureByRefType(System.Reflection.SignatureType elementType)
	{
	}

	[Token(Token = "0x600250A")]
	[Address(RVA = "0x53DC080", Offset = "0x53DB080", VA = "0x53DC080", Slot = "32")]
	protected sealed override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x600250B")]
	[Address(RVA = "0x53DC090", Offset = "0x53DB090", VA = "0x53DC090", Slot = "34")]
	protected sealed override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x600250C")]
	[Address(RVA = "0x53DC0A0", Offset = "0x53DB0A0", VA = "0x53DC0A0", Slot = "36")]
	protected sealed override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x600250F")]
	[Address(RVA = "0x53DC0D0", Offset = "0x53DB0D0", VA = "0x53DC0D0", Slot = "48")]
	public sealed override int GetArrayRank()
	{
		return default(int);
	}
}
