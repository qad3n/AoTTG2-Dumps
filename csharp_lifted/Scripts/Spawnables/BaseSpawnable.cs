// ==================== AoTTG2 cross-reference ====================
// Type: Spawnables.BaseSpawnable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Spawnables/BaseSpawnable.c
// Prior real C# source (older reference): Assets/Scripts/Spawnables/BaseSpawnable.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Spawnables;

[Token(Token = "0x200005E")]
internal class BaseSpawnable : MonoBehaviour
{
	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x20")]
	protected Player _owner;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x28")]
	protected float _timeLeft;

	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x2C")]
	protected bool _expires;

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x576DA90", Offset = "0x576CA90", VA = "0x576DA90", Slot = "4")]
	public virtual void Setup(Player owner, float liveTime, object[] settings)
	{
		// Lifted from source/cpp/Spawnables/BaseSpawnable.c (Spawnables.BaseSpawnable$$Setup): clean
		this._owner = owner;
		this._timeLeft = liveTime;
		this._expires = 0.0 < liveTime;
		this.SetupSettings(settings);
		return;
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x576DAF0", Offset = "0x576CAF0", VA = "0x576DAF0", Slot = "5")]
	protected virtual void SetupSettings(object[] settings)
	{
		// Lifted from source/cpp/Spawnables/BaseSpawnable.c (Spawnables.BaseSpawnable$$SetupSettings): clean
		return;
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x576DB00", Offset = "0x576CB00", VA = "0x576DB00", Slot = "6")]
	protected virtual void Update()
	{
		// Lifted from source/cpp/Spawnables/BaseSpawnable.c (Spawnables.BaseSpawnable$$Update): clean
		Object obj;
		float fVar1;
		float fVar2;

		fVar2 = this._timeLeft;
		fVar1 = Time.deltaTime;
		fVar2 = fVar2 - fVar1;
		this._timeLeft = fVar2;
		if ((fVar2 <= 0.0) && (this._expires != false)) {
			obj = (Object)this.gameObject;
			Object.Destroy(obj);
			return;
		}
		return;
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x576DB90", Offset = "0x576CB90", VA = "0x576DB90")]
	public BaseSpawnable()
	{
		// Lifted from source/cpp/Spawnables/BaseSpawnable.c (Spawnables.BaseSpawnable$$.ctor): clean
		base();
		return;
	}
}
