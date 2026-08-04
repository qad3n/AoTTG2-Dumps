// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.SendOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200003D")]
public struct SendOptions
{
	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SendOptions SendReliable;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x8")]
	public static readonly SendOptions SendUnreliable;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0x0")]
	public DeliveryMode DeliveryMode;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x4")]
	public bool Encrypt;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0x5")]
	public byte Channel;

	[Token(Token = "0x17000092")]
	public bool Reliability
	{
		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x3E8B570", Offset = "0x3E8B570", VA = "0x3E8B570")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x3E8B580", Offset = "0x3E8B580", VA = "0x3E8B580")]
		set
		{
		}
	}
}
