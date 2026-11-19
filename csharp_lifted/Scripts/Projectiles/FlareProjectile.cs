// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.FlareProjectile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/FlareProjectile.c
// Prior real C# source (older reference): Assets/Scripts/Projectiles/FlareProjectile.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x2000076")]
internal class FlareProjectile : BaseProjectile
{
	[Token(Token = "0x17000084")]
	protected override float DestroyDelay
	{
		[Token(Token = "0x6000350")]
		[Address(RVA = "0x5772430", Offset = "0x5771430", VA = "0x5772430", Slot = "11")]
		get
		{
			// Lifted from source/cpp/Projectiles/FlareProjectile.c (Projectiles.FlareProjectile$$get_DestroyDelay): clean
			return 10.0;
		}
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x5772440", Offset = "0x5771440", VA = "0x5772440", Slot = "14")]
	protected override void SetupSettings(object[] settings)
	{
		// Lifted from source/cpp/Projectiles/FlareProjectile.c (Projectiles.FlareProjectile$$SetupSettings): 3 lines keep C-only constructs
		object obj;
		ParticleSystem __this_00;
		Color pUVar1;

		__this_00 = this.GetComponent<ParticleSystem>();
		if (settings != null) {
			if ((int)settings.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if ((__this_00 != null) &&(obj = settings[0], obj != null)) {
				if ((obj.klass._1).element_class != (typeof(Color)._1).element_class) {
					throw new InvalidCastException();
				}
				pUVar1 = il2cpp_vm_Object_Unbox(obj);
				__this_00.startColor = (UnityEngine_Color_o)*pUVar1;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x57724F0", Offset = "0x57714F0", VA = "0x57724F0")]
	private void OnCollisionEnter(Collision collision)
	{
		// Lifted from source/cpp/Projectiles/FlareProjectile.c (Projectiles.FlareProjectile$$OnCollisionEnter): clean
		PhotonView pPVar1;

		pPVar1 = this.photonView;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		if ((pPVar1._IsMine_k__BackingField == false) || (this.Disabled != false)) {
			return;
		}
		this.DestroySelf();
		return;
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x5772530", Offset = "0x5771530", VA = "0x5772530")]
	public FlareProjectile()
	{
		// Lifted from source/cpp/Projectiles/FlareProjectile.c (Projectiles.FlareProjectile$$.ctor): clean
		base();
		return;
	}
}
