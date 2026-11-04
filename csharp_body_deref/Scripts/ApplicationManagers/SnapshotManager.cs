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

[Token(Token = "0x2000921")]
internal class SnapshotManager : MonoBehaviour
{
	[Token(Token = "0x4002D83")]
	[FieldOffset(Offset = "0x0")]
	private static SnapshotManager _instance;

	[Token(Token = "0x4002D84")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string SnapshotPath;

	[Token(Token = "0x4002D85")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string SnapshotTempPath;

	[Token(Token = "0x4002D86")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string SnapshotFilePrefix;

	[Token(Token = "0x4002D87")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int MaxSnapshots;

	[Token(Token = "0x4002D88")]
	[FieldOffset(Offset = "0x24")]
	private static int _currentSnapshotSaveId;

	[Token(Token = "0x4002D89")]
	[FieldOffset(Offset = "0x28")]
	private static int _maxSnapshotSaveId;

	[Token(Token = "0x4002D8A")]
	[FieldOffset(Offset = "0x30")]
	private static int[] _damages;

	[Token(Token = "0x60055C2")]
	[Address(RVA = "0x2357B50", Offset = "0x2356150", VA = "0x182357B50")]
	public static void Init()
	{
	}

	[Token(Token = "0x60055C3")]
	[Address(RVA = "0x2357BE0", Offset = "0x23561E0", VA = "0x182357BE0")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x60055C4")]
	[Address(RVA = "0x23574C0", Offset = "0x2355AC0", VA = "0x1823574C0")]
	private static void ClearTemp()
	{
	}

	[Token(Token = "0x60055C5")]
	[Address(RVA = "0x23577D0", Offset = "0x2355DD0", VA = "0x1823577D0")]
	private static string GetFileName(int snapshotId)
	{
		return null;
	}

	[Token(Token = "0x60055C6")]
	[Address(RVA = "0x2357200", Offset = "0x2355800", VA = "0x182357200")]
	public static void AddSnapshot(Texture2D texture, int damage)
	{
	}

	[Token(Token = "0x60055C7")]
	[Address(RVA = "0x2357D20", Offset = "0x2356320", VA = "0x182357D20")]
	private static byte[] SerializeSnapshot(Texture2D texture)
	{
		return null;
	}

	[Token(Token = "0x60055C8")]
	[Address(RVA = "0x23575C0", Offset = "0x2355BC0", VA = "0x1823575C0")]
	private static Texture2D DeserializeSnapshot(byte[] bytes)
	{
		return null;
	}

	[Token(Token = "0x60055C9")]
	[Address(RVA = "0x2357C20", Offset = "0x2356220", VA = "0x182357C20")]
	public static void SaveSnapshotFinish(Texture2D texture, string fileName)
	{
	}

	[Token(Token = "0x60055CA")]
	[Address(RVA = "0x2357730", Offset = "0x2355D30", VA = "0x182357730")]
	public static int GetDamage(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60055CB")]
	[Address(RVA = "0x2357890", Offset = "0x2355E90", VA = "0x182357890")]
	public static Texture2D GetSnapshot(int index)
	{
		return null;
	}

	[Token(Token = "0x60055CC")]
	[Address(RVA = "0x2357840", Offset = "0x2355E40", VA = "0x182357840")]
	public static int GetLength()
	{
		return default(int);
	}

	[Token(Token = "0x60055CD")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public SnapshotManager()
	{
	}
}
