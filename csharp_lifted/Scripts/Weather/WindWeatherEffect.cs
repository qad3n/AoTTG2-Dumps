// ==================== AoTTG2 cross-reference ====================
// Type: Weather.WindWeatherEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/WindWeatherEffect.c
// Prior real C# source (older reference): Assets/Scripts/Weather/WindWeatherEffect.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Weather;

[Token(Token = "0x2000041")]
internal class WindWeatherEffect : BaseWeatherEffect
{
	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x0")]
	public static bool WindEnabled;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x4")]
	public static Vector3 WindDirection;

	[Token(Token = "0x17000024")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x57627E0", Offset = "0x57617E0", VA = "0x57627E0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Weather/WindWeatherEffect.c (Weather.WindWeatherEffect$$get__positionOffset): clean
			uint uVar1;
			uint uVar2;
			Vector3 UVar4;

			uVar1 = (Vector3.upVector).x;
			uVar2 = (Vector3.upVector).y;
			UVar4.x = (float)uVar1 * 0.0;
			UVar4.y = (float)uVar2 * 0.0;
			UVar4.z = (Vector3.upVector).z * 0.0;
			return (Vector3)UVar4;
		}
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x5762830", Offset = "0x5761830", VA = "0x5762830", Slot = "11")]
	public override void Setup(Transform parent)
	{
		// Lifted from source/cpp/Weather/WindWeatherEffect.c (Weather.WindWeatherEffect$$Setup): clean
		this.Setup(parent);
		return;
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x5762840", Offset = "0x5761840", VA = "0x5762840", Slot = "8")]
	public override void Randomize()
	{
		// Lifted from source/cpp/Weather/WindWeatherEffect.c (Weather.WindWeatherEffect$$Randomize): clean
		return;
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x5762850", Offset = "0x5761850", VA = "0x5762850", Slot = "6")]
	public override void Disable(bool fadeOut = false)
	{
		// Lifted from source/cpp/Weather/WindWeatherEffect.c (Weather.WindWeatherEffect$$Disable): clean
		WindWeatherEffect.WindEnabled = false;
		this.Disable(fadeOut);
		return;
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x57628B0", Offset = "0x57618B0", VA = "0x57628B0", Slot = "10")]
	public override void SetLevel(float level)
	{
		// Lifted from source/cpp/Weather/WindWeatherEffect.c (Weather.WindWeatherEffect$$SetLevel): 4 lines keep C-only constructs
		_func_28 UNRECOVERED_JUMPTABLE_00;
		MethodInfo pMVar1;

		if (Il2CppMethodInitialized_075450bb == false) {
			Il2CppMethodInitialized_075450bb = true;
			this._level = level;
		}
		else {
			this._level = level;
		}
		if (level <= 0.0) {
			return;
		}
		if (((typeof(WindWeatherEffect))._2).cctor_finished_or_no_cctor == 0) {
		}
		WindWeatherEffect.WindEnabled = true;
		UNRECOVERED_JUMPTABLE_00 = (this.klass.vtable)._15_SetAudioVolume.methodPtr;
		pMVar1 = (this.klass.vtable)._15_SetAudioVolume.method;
		if (0.5 <= level) {
			(*UNRECOVERED_JUMPTABLE_00)(this,1,0.5,pMVar1);
			return;
		}
		(*UNRECOVERED_JUMPTABLE_00)(this,0,1.0,pMVar1);
		return;
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x5762990", Offset = "0x5761990", VA = "0x5762990")]
	public WindWeatherEffect()
	{
		// Lifted from source/cpp/Weather/WindWeatherEffect.c (Weather.WindWeatherEffect$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Weather/WindWeatherEffect.c.

	// Weather.WindWeatherEffect$$.cctor: clean
	static WindWeatherEffect()
	{
		float fVar1;
		float fVar3;
		Weather_WindWeatherEffect_StaticFields pWVar4;

		pWVar4 = typeof(WindWeatherEffect).static_fields;
		pWVar4.WindEnabled = false;
		if (Il2CppMethodInitialized_0753e4b6 == false) {
			Il2CppMethodInitialized_0753e4b6 = true;
			pWVar4 = typeof(WindWeatherEffect).static_fields;
		}
		fVar3 = (Vector3.zeroVector).y;
		fVar1 = (Vector3.zeroVector).z;
		(pWVar4.WindDirection).x = (Vector3.zeroVector).x;
		(pWVar4.WindDirection).y = fVar3;
		(pWVar4.WindDirection).z = fVar1;
		return;
	}
}
