// ==================== AoTTG2 cross-reference ====================
// Type: Spawnables.BaseSpawnable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Spawnables/BaseSpawnable.c
// Prior real C# source (older reference): Assets/Scripts/Spawnables/BaseSpawnable.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Spawnables;

[Token(Token = "0x200005F")]
internal class BaseSpawnable : MonoBehaviour
{
	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x20")]
	protected Player _owner;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x28")]
	protected float _timeLeft;

	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x2C")]
	protected bool _expires;

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x1DB9AF0", Offset = "0x1DB80F0", VA = "0x181DB9AF0", Slot = "4")]
	public virtual void Setup(Player owner, float liveTime, object[] settings)
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	protected virtual void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x1DB9B50", Offset = "0x1DB8150", VA = "0x181DB9B50", Slot = "6")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public BaseSpawnable()
	{
	}
}
