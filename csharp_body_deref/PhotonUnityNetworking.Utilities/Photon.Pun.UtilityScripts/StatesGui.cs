// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.StatesGui
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/Debugging/StatesGui.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200000B")]
public class StatesGui : MonoBehaviour
{
	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x20")]
	public Rect GuiOffset;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x30")]
	public bool DontDestroy;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x31")]
	public bool ServerTimestamp;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x32")]
	public bool DetailedConnection;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x33")]
	public bool Server;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x34")]
	public bool AppVersion;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x35")]
	public bool UserId;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x36")]
	public bool Room;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x37")]
	public bool RoomProps;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x38")]
	public bool EventsIn;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x39")]
	public bool LocalPlayer;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x3A")]
	public bool PlayerProps;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x3B")]
	public bool Others;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x3C")]
	public bool Buttons;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x3D")]
	public bool ExpectedUsers;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x40")]
	private Rect GuiRect;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x0")]
	private static StatesGui Instance;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x50")]
	private float native_width;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x54")]
	private float native_height;

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x1D5DDA0", Offset = "0x1D5C3A0", VA = "0x181D5DDA0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x1D5DF10", Offset = "0x1D5C510", VA = "0x181D5DF10")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x1D5DFC0", Offset = "0x1D5C5C0", VA = "0x181D5DFC0")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x1D5EE60", Offset = "0x1D5D460", VA = "0x181D5EE60")]
	private string PlayerToString(Player player)
	{
		return null;
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x1D5F2B0", Offset = "0x1D5D8B0", VA = "0x181D5F2B0")]
	public StatesGui()
	{
	}
}
