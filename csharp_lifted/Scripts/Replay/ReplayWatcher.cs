// ==================== AoTTG2 cross-reference ====================
// Type: Replay.ReplayWatcher
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Replay/ReplayWatcher.c
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayWatcher.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Replay;

[Token(Token = "0x2000071")]
internal class ReplayWatcher : MonoBehaviour
{
	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x20")]
	public bool Playing;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x24")]
	public float Speed;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x28")]
	public float CurrentTime;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x2C")]
	public float MaxTime;

	[Token(Token = "0x4000230")]
	[FieldOffset(Offset = "0x30")]
	private ReplayScript _script;

	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x38")]
	private int _currentEvent;

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x576E5C0", Offset = "0x576D5C0", VA = "0x576E5C0")]
	public void LoadScript(ReplayScript script)
	{
		// Lifted from source/cpp/Replay/ReplayWatcher.c (Replay.ReplayWatcher$$LoadScript): 1 lines keep C-only constructs
		System_Collections_Generic_List_ReplayScriptEvent__o pSVar1;
		ReplayScriptEvent pRVar2;

		this._script = script;
		this._currentEvent = 0;
		this.Playing = false;
		if ((script != null) &&(pSVar1 = script.Events, pSVar1 != null) ) {
			pRVar2 = pSVar1.get_Item(0);
			if (pRVar2 != null) {
				this.CurrentTime = pRVar2.Time;
				pSVar1 = script.Events;
				if (pSVar1 != null) {
					pRVar2 = pSVar1.get_Item(pSVar1._size + -1);
					if (pRVar2 != null) {
						this.MaxTime = pRVar2.Time;
						pSVar1 = script.Events;
						if (pSVar1 != null) {
							pRVar2 = pSVar1.get_Item(0);
							this.HandleEvent(pRVar2);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x576E810", Offset = "0x576D810", VA = "0x576E810")]
	private void FixedUpdate()
	{
		// Lifted from source/cpp/Replay/ReplayWatcher.c (Replay.ReplayWatcher$$FixedUpdate): 3 lines keep C-only constructs
		int piVar1;
		int iVar2;
		ReplayScript pRVar3;
		System_Collections_Generic_List_ReplayScriptEvent__o __this_00;
		ReplayScriptEvent currentEvent;
		float fVar4;
		float fVar5;

		if (this.Playing == false) {
			return;
		}
		fVar5 = this.CurrentTime;
		fVar4 = Time.fixedDeltaTime;
		this.CurrentTime = fVar4 * this.Speed + fVar5;
		pRVar3 = this._script;
		while ((pRVar3 != null &&(__this_00 = pRVar3.Events, __this_00 != null))) {
			iVar2 = this._currentEvent;
			if (__this_00._size + -1 <= iVar2) {
				fVar5 = this.CurrentTime;
	label_0586e8d4: ;
				fVar4 = this.MaxTime;
				if (fVar5 < fVar4) {
					return;
				}
				this.CurrentTime = fVar4;
				this.Playing = false;
				return;
			}
			currentEvent = __this_00.get_Item(iVar2 + 1);
			if (currentEvent == null) break;
			fVar5 = this.CurrentTime;
			if (fVar5 < currentEvent.Time) goto label_0586e8d4;
			piVar1 = &this._currentEvent;
			*piVar1 = *piVar1 + 1;
			this.HandleEvent(currentEvent);
			pRVar3 = this._script;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x576E690", Offset = "0x576D690", VA = "0x576E690")]
	private void HandleEvent(ReplayScriptEvent currentEvent)
	{
		// Lifted from source/cpp/Replay/ReplayWatcher.c (Replay.ReplayWatcher$$HandleEvent): 5 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		String pSVar3;
		ReplayWatcher __this_00;
		Enum local_30;

		if (currentEvent == null) {
			throw new NullReferenceException();
		}
		__this_00 = (ReplayWatcher)currentEvent.Category;
		local_30.klass = (Enum)typeof(ReplayEventCategory);
		local_30.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = local_30.ToString();
		bVar1 = ((String)__this_00 == pSVar2);
		if (bVar1) {
			__this_00.HandleMapEvent(currentEvent);
		}
		else {
			pSVar2 = currentEvent.Category;
			local_30.klass = (Enum)typeof(ReplayEventCategory);
			local_30.monitor = (IntPtr)0xffffffffffffffff;
			pSVar3 = local_30.ToString();
			bVar1 = (pSVar2 == pSVar3);
			if (!bVar1) {
				pSVar2 = currentEvent.Category;
				local_30.klass = (Enum)typeof(ReplayEventCategory);
				local_30.monitor = (IntPtr)0xffffffffffffffff;
				pSVar3 = local_30.ToString();
				bVar1 = (pSVar2 == pSVar3);
				if (!bVar1) {
					pSVar2 = currentEvent.Category;
					local_30.klass = (Enum)typeof(ReplayEventCategory);
					local_30.monitor = (IntPtr)0xffffffffffffffff;
					pSVar3 = local_30.ToString();
					bVar1 = (pSVar2 == pSVar3);
					if (!bVar1) {
						pSVar2 = currentEvent.Category;
						local_30.klass = (Enum)typeof(ReplayEventCategory);
						local_30.monitor = (IntPtr)0xffffffffffffffff;
						pSVar3 = local_30.ToString();
						(pSVar2 == pSVar3);
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x576E8F0", Offset = "0x576D8F0", VA = "0x576E8F0")]
	private void HandleMapEvent(ReplayScriptEvent currentEvent)
	{
		// Lifted from source/cpp/Replay/ReplayWatcher.c (Replay.ReplayWatcher$$HandleMapEvent): 1 lines keep C-only constructs
		String a;
		List<string> __this_00;
		bool bVar1;
		String b;
		Enum local_28;

		if (currentEvent == null) {
	label_0586e987: ;
			throw new NullReferenceException();
		}
		a = currentEvent.Action;
		local_28.klass = (Enum)typeof(ReplayEventMapAction);
		local_28.monitor = (IntPtr)0xffffffffffffffff;
		b = local_28.ToString();
		bVar1 = (a == b);
		if (bVar1) {
			__this_00 = currentEvent.Parameters;
			if (__this_00 == null) goto label_0586e987;
			__this_00.get_Item(0);
		}
		return;
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x576E990", Offset = "0x576D990", VA = "0x576E990")]
	private void HandleHumanEvent(ReplayScriptEvent currentEvent)
	{
		// Lifted from source/cpp/Replay/ReplayWatcher.c (Replay.ReplayWatcher$$HandleHumanEvent): clean
		return;
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x576E9A0", Offset = "0x576D9A0", VA = "0x576E9A0")]
	private void HandleTitanEvent(ReplayScriptEvent currentEvent)
	{
		// Lifted from source/cpp/Replay/ReplayWatcher.c (Replay.ReplayWatcher$$HandleTitanEvent): clean
		return;
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x576E9B0", Offset = "0x576D9B0", VA = "0x576E9B0")]
	private void HandleCameraEvent(ReplayScriptEvent currentEvent)
	{
		// Lifted from source/cpp/Replay/ReplayWatcher.c (Replay.ReplayWatcher$$HandleCameraEvent): clean
		return;
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x576E9C0", Offset = "0x576D9C0", VA = "0x576E9C0")]
	private void HandleChatEvent(ReplayScriptEvent currentEvent)
	{
		// Lifted from source/cpp/Replay/ReplayWatcher.c (Replay.ReplayWatcher$$HandleChatEvent): clean
		return;
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x576E9D0", Offset = "0x576D9D0", VA = "0x576E9D0")]
	public ReplayWatcher()
	{
		// Lifted from source/cpp/Replay/ReplayWatcher.c (Replay.ReplayWatcher$$.ctor): clean
		base();
		return;
	}
}
