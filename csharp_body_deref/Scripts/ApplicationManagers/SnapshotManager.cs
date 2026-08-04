// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.SnapshotManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/SnapshotManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/SnapshotManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000796")]
internal class SnapshotManager : MonoBehaviour
{
	[Token(Token = "0x40024B5")]
	[FieldOffset(Offset = "0x0")]
	private static SnapshotManager _instance;

	[Token(Token = "0x40024B6")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string SnapshotPath;

	[Token(Token = "0x40024B7")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string SnapshotTempPath;

	[Token(Token = "0x40024B8")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string SnapshotFilePrefix;

	[Token(Token = "0x40024B9")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int MaxSnapshots;

	[Token(Token = "0x40024BA")]
	[FieldOffset(Offset = "0x24")]
	private static int _currentSnapshotSaveId;

	[Token(Token = "0x40024BB")]
	[FieldOffset(Offset = "0x28")]
	private static int _maxSnapshotSaveId;

	[Token(Token = "0x40024BC")]
	[FieldOffset(Offset = "0x30")]
	private static int[] _damages;

	[Token(Token = "0x600494A")]
	[Address(RVA = "0x43C0830", Offset = "0x43C0830", VA = "0x43C0830")]
	public static void Init()
	{
	}

	[Token(Token = "0x600494B")]
	[Address(RVA = "0x43C0A20", Offset = "0x43C0A20", VA = "0x43C0A20")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x600494C")]
	[Address(RVA = "0x43C08B0", Offset = "0x43C08B0", VA = "0x43C08B0")]
	private static void ClearTemp()
	{
	}

	[Token(Token = "0x600494D")]
	[Address(RVA = "0x43C0A80", Offset = "0x43C0A80", VA = "0x43C0A80")]
	private static string GetFileName(int snapshotId)
	{
		return null;
	}

	[Token(Token = "0x600494E")]
	[Address(RVA = "0x43C0AF0", Offset = "0x43C0AF0", VA = "0x43C0AF0")]
	public static void AddSnapshot(Texture2D texture, int damage)
	{
	}

	[Token(Token = "0x600494F")]
	[Address(RVA = "0x43C0E30", Offset = "0x43C0E30", VA = "0x43C0E30")]
	private static byte[] SerializeSnapshot(Texture2D texture)
	{
		return null;
	}

	[Token(Token = "0x6004950")]
	[Address(RVA = "0x43C1030", Offset = "0x43C1030", VA = "0x43C1030")]
	private static Texture2D DeserializeSnapshot(byte[] bytes)
	{
		return null;
	}

	[Token(Token = "0x6004951")]
	[Address(RVA = "0x43C11A0", Offset = "0x43C11A0", VA = "0x43C11A0")]
	public static void SaveSnapshotFinish(Texture2D texture, string fileName)
	{
	}

	[Token(Token = "0x6004952")]
	[Address(RVA = "0x43C1280", Offset = "0x43C1280", VA = "0x43C1280")]
	public static int GetDamage(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6004953")]
	[Address(RVA = "0x43C1340", Offset = "0x43C1340", VA = "0x43C1340")]
	public static Texture2D GetSnapshot(int index)
	{
		return null;
	}

	[Token(Token = "0x6004954")]
	[Address(RVA = "0x43C14E0", Offset = "0x43C14E0", VA = "0x43C14E0")]
	public static int GetLength()
	{
		return default(int);
	}

	[Token(Token = "0x6004955")]
	[Address(RVA = "0x43C1550", Offset = "0x43C1550", VA = "0x43C1550")]
	public SnapshotManager()
	{
	}
}
