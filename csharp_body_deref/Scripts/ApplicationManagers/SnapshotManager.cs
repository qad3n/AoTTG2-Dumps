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

[Token(Token = "0x2000988")]
internal class SnapshotManager : MonoBehaviour
{
	[Token(Token = "0x4003030")]
	[FieldOffset(Offset = "0x0")]
	private static SnapshotManager _instance;

	[Token(Token = "0x4003031")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string SnapshotPath;

	[Token(Token = "0x4003032")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string SnapshotTempPath;

	[Token(Token = "0x4003033")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string SnapshotFilePrefix;

	[Token(Token = "0x4003034")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int MaxSnapshots;

	[Token(Token = "0x4003035")]
	[FieldOffset(Offset = "0x24")]
	private static int _currentSnapshotSaveId;

	[Token(Token = "0x4003036")]
	[FieldOffset(Offset = "0x28")]
	private static int _maxSnapshotSaveId;

	[Token(Token = "0x4003037")]
	[FieldOffset(Offset = "0x30")]
	private static int[] _damages;

	[Token(Token = "0x6005918")]
	[Address(RVA = "0x5D08DD0", Offset = "0x5D07DD0", VA = "0x5D08DD0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005919")]
	[Address(RVA = "0x5D1DA20", Offset = "0x5D1CA20", VA = "0x5D1DA20")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x600591A")]
	[Address(RVA = "0x5D1D8C0", Offset = "0x5D1C8C0", VA = "0x5D1D8C0")]
	private static void ClearTemp()
	{
	}

	[Token(Token = "0x600591B")]
	[Address(RVA = "0x5D1DA80", Offset = "0x5D1CA80", VA = "0x5D1DA80")]
	private static string GetFileName(int snapshotId)
	{
		return null;
	}

	[Token(Token = "0x600591C")]
	[Address(RVA = "0x5D1DAF0", Offset = "0x5D1CAF0", VA = "0x5D1DAF0")]
	public static void AddSnapshot(Texture2D texture, int damage)
	{
	}

	[Token(Token = "0x600591D")]
	[Address(RVA = "0x5D1DDF0", Offset = "0x5D1CDF0", VA = "0x5D1DDF0")]
	private static byte[] SerializeSnapshot(Texture2D texture)
	{
		return null;
	}

	[Token(Token = "0x600591E")]
	[Address(RVA = "0x5D1DFF0", Offset = "0x5D1CFF0", VA = "0x5D1DFF0")]
	private static Texture2D DeserializeSnapshot(byte[] bytes)
	{
		return null;
	}

	[Token(Token = "0x600591F")]
	[Address(RVA = "0x5D1E160", Offset = "0x5D1D160", VA = "0x5D1E160")]
	public static void SaveSnapshotFinish(Texture2D texture, string fileName)
	{
	}

	[Token(Token = "0x6005920")]
	[Address(RVA = "0x5D1E240", Offset = "0x5D1D240", VA = "0x5D1E240")]
	public static int GetDamage(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6005921")]
	[Address(RVA = "0x5D1E300", Offset = "0x5D1D300", VA = "0x5D1E300")]
	public static Texture2D GetSnapshot(int index)
	{
		return null;
	}

	[Token(Token = "0x6005922")]
	[Address(RVA = "0x5D1E4A0", Offset = "0x5D1D4A0", VA = "0x5D1E4A0")]
	public static int GetLength()
	{
		return default(int);
	}

	[Token(Token = "0x6005923")]
	[Address(RVA = "0x5D1E510", Offset = "0x5D1D510", VA = "0x5D1E510")]
	public SnapshotManager()
	{
	}
}
