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

[Token(Token = "0x200000D")]
public class StatesGui : MonoBehaviour
{
	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x20")]
	public Rect GuiOffset;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x30")]
	public bool DontDestroy;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x31")]
	public bool ServerTimestamp;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x32")]
	public bool DetailedConnection;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x33")]
	public bool Server;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x34")]
	public bool AppVersion;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x35")]
	public bool UserId;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x36")]
	public bool Room;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x37")]
	public bool RoomProps;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x38")]
	public bool EventsIn;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x39")]
	public bool LocalPlayer;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x3A")]
	public bool PlayerProps;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x3B")]
	public bool Others;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x3C")]
	public bool Buttons;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x3D")]
	public bool ExpectedUsers;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x40")]
	private Rect GuiRect;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x0")]
	private static StatesGui Instance;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x50")]
	private float native_width;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x54")]
	private float native_height;

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x3F00BC0", Offset = "0x3F00BC0", VA = "0x3F00BC0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x3F00D30", Offset = "0x3F00D30", VA = "0x3F00D30")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x3F00DD0", Offset = "0x3F00DD0", VA = "0x3F00DD0")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x3F02850", Offset = "0x3F02850", VA = "0x3F02850")]
	private string PlayerToString(Player player)
	{
		return null;
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x3F02C90", Offset = "0x3F02C90", VA = "0x3F02C90")]
	public StatesGui()
	{
	}
}
