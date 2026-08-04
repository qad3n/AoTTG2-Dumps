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
	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0x20")]
	protected Player _owner;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x28")]
	protected float _timeLeft;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0x2C")]
	protected bool _expires;

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x3F842A0", Offset = "0x3F842A0", VA = "0x3F842A0", Slot = "4")]
	public virtual void Setup(Player owner, float liveTime, object[] settings)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x3F84300", Offset = "0x3F84300", VA = "0x3F84300", Slot = "5")]
	protected virtual void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x3F84310", Offset = "0x3F84310", VA = "0x3F84310", Slot = "6")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x3F843A0", Offset = "0x3F843A0", VA = "0x3F843A0")]
	public BaseSpawnable()
	{
	}
}
