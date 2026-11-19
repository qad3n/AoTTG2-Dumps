// ==================== AoTTG2 cross-reference ====================
// Type: Windmill_RandomSpin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Windmill_RandomSpin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000002")]
public class Windmill_RandomSpin : MonoBehaviour
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Animator _animator;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x313C240", Offset = "0x313B240", VA = "0x313C240")]
	private void Start()
	{
		// Lifted from source/cpp/Windmill_RandomSpin.c (Windmill_RandomSpin$$Start): clean
		float time;

		time = Random.Range(0.0, 3.4);
		this.Invoke("RandomSpin", time);
		return;
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x313C290", Offset = "0x313B290", VA = "0x313C290")]
	private void RandomSpin()
	{
		// Lifted from source/cpp/Windmill_RandomSpin.c (Windmill_RandomSpin$$RandomSpin): clean
		Animator __this_00;

		__this_00 = this._animator;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetTrigger("Trigger_Spin");
		return;
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x313C2D0", Offset = "0x313B2D0", VA = "0x313C2D0")]
	public Windmill_RandomSpin()
	{
		// Lifted from source/cpp/Windmill_RandomSpin.c (Windmill_RandomSpin$$.ctor): clean
		base();
		return;
	}
}
