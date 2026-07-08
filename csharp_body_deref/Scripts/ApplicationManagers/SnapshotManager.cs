using Il2CppDummyDll;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000747")]
internal class SnapshotManager : MonoBehaviour
{
	[Token(Token = "0x4002356")]
	[FieldOffset(Offset = "0x0")]
	private static SnapshotManager _instance;

	[Token(Token = "0x4002357")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string SnapshotPath;

	[Token(Token = "0x4002358")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string SnapshotTempPath;

	[Token(Token = "0x4002359")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string SnapshotFilePrefix;

	[Token(Token = "0x400235A")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int MaxSnapshots;

	[Token(Token = "0x400235B")]
	[FieldOffset(Offset = "0x24")]
	private static int _currentSnapshotSaveId;

	[Token(Token = "0x400235C")]
	[FieldOffset(Offset = "0x28")]
	private static int _maxSnapshotSaveId;

	[Token(Token = "0x400235D")]
	[FieldOffset(Offset = "0x30")]
	private static int[] _damages;

	[Token(Token = "0x60046DB")]
	[Address(RVA = "0x40A7870", Offset = "0x40A7870", VA = "0x40A7870")]
	public static void Init()
	{
	}

	[Token(Token = "0x60046DC")]
	[Address(RVA = "0x40A7A60", Offset = "0x40A7A60", VA = "0x40A7A60")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x60046DD")]
	[Address(RVA = "0x40A78F0", Offset = "0x40A78F0", VA = "0x40A78F0")]
	private static void ClearTemp()
	{
	}

	[Token(Token = "0x60046DE")]
	[Address(RVA = "0x40A7AC0", Offset = "0x40A7AC0", VA = "0x40A7AC0")]
	private static string GetFileName(int snapshotId)
	{
		return null;
	}

	[Token(Token = "0x60046DF")]
	[Address(RVA = "0x40A7B30", Offset = "0x40A7B30", VA = "0x40A7B30")]
	public static void AddSnapshot(Texture2D texture, int damage)
	{
	}

	[Token(Token = "0x60046E0")]
	[Address(RVA = "0x40A7E70", Offset = "0x40A7E70", VA = "0x40A7E70")]
	private static byte[] SerializeSnapshot(Texture2D texture)
	{
		return null;
	}

	[Token(Token = "0x60046E1")]
	[Address(RVA = "0x40A8070", Offset = "0x40A8070", VA = "0x40A8070")]
	private static Texture2D DeserializeSnapshot(byte[] bytes)
	{
		return null;
	}

	[Token(Token = "0x60046E2")]
	[Address(RVA = "0x40A81E0", Offset = "0x40A81E0", VA = "0x40A81E0")]
	public static void SaveSnapshotFinish(Texture2D texture, string fileName)
	{
	}

	[Token(Token = "0x60046E3")]
	[Address(RVA = "0x40A82C0", Offset = "0x40A82C0", VA = "0x40A82C0")]
	public static int GetDamage(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60046E4")]
	[Address(RVA = "0x40A8380", Offset = "0x40A8380", VA = "0x40A8380")]
	public static Texture2D GetSnapshot(int index)
	{
		return null;
	}

	[Token(Token = "0x60046E5")]
	[Address(RVA = "0x40A8520", Offset = "0x40A8520", VA = "0x40A8520")]
	public static int GetLength()
	{
		return default(int);
	}

	[Token(Token = "0x60046E6")]
	[Address(RVA = "0x40A8590", Offset = "0x40A8590", VA = "0x40A8590")]
	public SnapshotManager()
	{
	}
}
