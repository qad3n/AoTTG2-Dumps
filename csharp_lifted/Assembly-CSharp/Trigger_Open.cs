// ==================== AoTTG2 cross-reference ====================
// Type: Trigger_Open
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Trigger_Open.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000003")]
public class Trigger_Open : MonoBehaviour
{
	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Animator _animator;

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x313C2E0", Offset = "0x313B2E0", VA = "0x313C2E0")]
	private void Start()
	{
		// Lifted from source/cpp/Trigger_Open.c (Trigger_Open$$Start): clean
		Animator __this_00;

		__this_00 = this._animator;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetTrigger("Trigger_Open");
		return;
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x313C320", Offset = "0x313B320", VA = "0x313C320")]
	public Trigger_Open()
	{
		// Lifted from source/cpp/Trigger_Open.c (Trigger_Open$$.ctor): clean
		base();
		return;
	}
}
