// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MobileInput
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/MobileInput.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UI;

namespace Settings;

[Token(Token = "0x200009A")]
public class MobileInput
{
	[Token(Token = "0x4000316")]
	[FieldOffset(Offset = "0x10")]
	private bool _current;

	[Token(Token = "0x4000317")]
	[FieldOffset(Offset = "0x11")]
	private bool _previous;

	[Token(Token = "0x4000318")]
	[FieldOffset(Offset = "0x14")]
	private int _pressedFrame;

	[Token(Token = "0x4000319")]
	[FieldOffset(Offset = "0x18")]
	private int _releasedFrame;

	[Token(Token = "0x400031A")]
	[FieldOffset(Offset = "0x1C")]
	private int _keyDownReturnedFrame;

	[Token(Token = "0x400031B")]
	[FieldOffset(Offset = "0x20")]
	private int _keyUpReturnedFrame;

	[Token(Token = "0x400031C")]
	[FieldOffset(Offset = "0x24")]
	private int _oneFrameReleaseFrame;

	[Token(Token = "0x400031D")]
	[FieldOffset(Offset = "0x28")]
	private Func<bool> _pressedOverride;

	[Token(Token = "0x400031E")]
	[FieldOffset(Offset = "0x30")]
	private readonly Dictionary<MobileInputLayoutRole, List<string>> _displayNames;

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x58CE150", Offset = "0x58CD150", VA = "0x58CE150")]
	public bool GetKey()
	{
		// Lifted from source/cpp/Settings/MobileInput.c (Settings.MobileInput$$GetKey): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07545c50 == false) {
			Il2CppMethodInitialized_07545c50 = true;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return false;
		}
		return false;
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x58CE1D0", Offset = "0x58CD1D0", VA = "0x58CE1D0")]
	public bool GetKeyDown()
	{
		// Lifted from source/cpp/Settings/MobileInput.c (Settings.MobileInput$$GetKeyDown): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07545c51 == false) {
			Il2CppMethodInitialized_07545c51 = true;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return false;
		}
		return false;
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x58CE220", Offset = "0x58CD220", VA = "0x58CE220")]
	public bool GetKeyUp()
	{
		// Lifted from source/cpp/Settings/MobileInput.c (Settings.MobileInput$$GetKeyUp): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07545c52 == false) {
			Il2CppMethodInitialized_07545c52 = true;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return false;
		}
		return false;
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x58CE270", Offset = "0x58CD270", VA = "0x58CE270")]
	public void SetPressed(bool pressed)
	{
		// Lifted from source/cpp/Settings/MobileInput.c (Settings.MobileInput$$SetPressed): clean
		int iVar1;

		this._oneFrameReleaseFrame = -1;
		if (this._current != pressed) {
			this._current = pressed;
			iVar1 = Time.frameCount;
			if (!pressed) {
				this._releasedFrame = iVar1;
				this._pressedFrame = -1;
				this._keyDownReturnedFrame = -1;
				return;
			}
			this._pressedFrame = iVar1;
			this._releasedFrame = -1;
			this._keyUpReturnedFrame = -1;
		}
		return;
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x58CE2D0", Offset = "0x58CD2D0", VA = "0x58CE2D0")]
	public void SetPressedOverride(Func<bool> pressedOverride)
	{
		// Lifted from source/cpp/Settings/MobileInput.c (Settings.MobileInput$$SetPressedOverride): clean
		this._pressedOverride = pressedOverride;
		return;
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x58CE2E0", Offset = "0x58CD2E0", VA = "0x58CE2E0")]
	public void PressForOneFrame()
	{
		// Lifted from source/cpp/Settings/MobileInput.c (Settings.MobileInput$$PressForOneFrame): clean
		int iVar1;

		this._oneFrameReleaseFrame = -1;
		if (this._current != true) {
			this._current = true;
			iVar1 = Time.frameCount;
			this._pressedFrame = iVar1;
			this._releasedFrame = -1;
			this._keyUpReturnedFrame = -1;
		}
		iVar1 = Time.frameCount;
		this._oneFrameReleaseFrame = iVar1 + 1;
		return;
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x58CE320", Offset = "0x58CD320", VA = "0x58CE320")]
	public void LateUpdate()
	{
		// Lifted from source/cpp/Settings/MobileInput.c (Settings.MobileInput$$LateUpdate): clean
		Func<bool> pSVar1;
		bool bVar2;
		int iVar3;

		if (-1 < this._oneFrameReleaseFrame) {
			iVar3 = Time.frameCount;
			if ((this._oneFrameReleaseFrame <= iVar3) &&(this._oneFrameReleaseFrame = -1, this._current != false)) {
				this._current = false;
				iVar3 = Time.frameCount;
				this._releasedFrame = iVar3;
				this._pressedFrame = -1;
				this._keyDownReturnedFrame = -1;
			}
		}
		if (this._current != false) {
			this._previous = true;
			return;
		}
		pSVar1 = this._pressedOverride;
		if (pSVar1 == null) {
			this._previous = false;
			return;
		}
		bVar2 = (bool)(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar1.method);
		this._previous = bVar2;
		return;
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x58CE390", Offset = "0x58CD390", VA = "0x58CE390")]
	public void Clear()
	{
		// Lifted from source/cpp/Settings/MobileInput.c (Settings.MobileInput$$Clear): clean
		this._oneFrameReleaseFrame = -1;
		this._current = false;
		this._previous = false;
		this._pressedFrame = -1;
		this._releasedFrame = -1;
		this._keyDownReturnedFrame = -1;
		this._keyUpReturnedFrame = -1;
		return;
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x58CE3B0", Offset = "0x58CD3B0", VA = "0x58CE3B0")]
	public void RegisterDisplayName(MobileInputLayoutRole role, string displayName)
	{
		// Lifted from source/cpp/Settings/MobileInput.c (Settings.MobileInput$$RegisterDisplayName): 3 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<MobileInputLayoutRole, List<string>> pSVar3;
		String[] pSVar4;
		bool bVar6;
		List<string> __this_00;
		List<string> local_28;

		local_28 = null;
		bVar6 = String.IsNullOrWhiteSpace(displayName);
		if (bVar6) {
			return;
		}
		pSVar3 = this._displayNames;
		if (pSVar3 != null) {
			bVar6 = pSVar3.TryGetValue(role, (object*)&local_28);
			if (!bVar6) {
				__this_00 = new List<string>();
				pSVar3 = this._displayNames;
				local_28 = __this_00;
				if (pSVar3 == null) goto label_059ce528;
				pSVar3.set_Item(role, (object)__this_00);
			}
			if (local_28 != null) {
				bVar6 = local_28.Contains((object)displayName);
				if (bVar6) {
					return;
				}
				if (local_28 != null) {
					piVar1 = &local_28._version;
					*piVar1 = *piVar1 + 1;
					pSVar4 = local_28._items;
					if (pSVar4 != null) {
						uVar2 = local_28._size;
						if (uVar2 < (uint)pSVar4.Length) {
							local_28._size = uVar2 + 1;
							pSVar4[(int)uVar2] = displayName;
							return;
						}
						local_28.AddWithResize((object)displayName);
						return;
					}
				}
			}
		}
	label_059ce528: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x58CE530", Offset = "0x58CD530", VA = "0x58CE530")]
	public void ClearDisplayNames()
	{
		// Lifted from source/cpp/Settings/MobileInput.c (Settings.MobileInput$$ClearDisplayNames): clean
		Dictionary<MobileInputLayoutRole, List<string>> __this_00;

		__this_00 = this._displayNames;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Clear();
		return;
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x58CE570", Offset = "0x58CD570", VA = "0x58CE570")]
	public string GetDisplayName(MobileInputLayoutRole[] roles)
	{
		// Lifted from source/cpp/Settings/MobileInput.c (Settings.MobileInput$$GetDisplayName): 6 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<MobileInputLayoutRole, List<string>> __this_00;
		bool bVar4;
		List<string> __this_01;
		ulong uVar5;
		String[] pSVar6;
		String pSVar7;
		ulong uVar8;
		List<object> pSStack_78;
		byte[] auStack_70 = new byte[16];
		String pSStack_60;
		byte[] auStack_58 = new byte[8];
		String pSStack_48;
		MobileInputLayoutRole[] pUStack_40;
		MobileInput pSStack_38;

		pSStack_38 = this;
		pSStack_78 = null;
		auStack_58 = (byte[])0x0;
		pSStack_48 = null;
		__this_01 = new List<string>();
		if (roles != null) {
			if (0 < (int)roles.Length) {
				uVar5 = roles.Length & 0xffffffff;
				uVar8 = 0;
				pUStack_40 = roles;
				do {
					if (uVar5 <= uVar8) {
						throw new IndexOutOfRangeException();
					}
					__this_00 = pSStack_38._displayNames;
					if (__this_00 == null) goto label_059ce86e;
					bVar4 = __this_00.TryGetValue(roles[uVar8], (object*)&pSStack_78);
					if (bVar4) {
						if (pSStack_78 == null) goto label_059ce86e;
						auStack_70.GetEnumerator(pSStack_78);
						pSStack_48 = pSStack_60;
						auStack_58 = (byte[])auStack_70._0_8_;
						auStack_70._0_8_ = null;
						auStack_70._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_58;
						if (__this_01 == null) {
							bVar4 = auStack_58.MoveNext();
							if (bVar4) {
								throw new NullReferenceException();
							}
						}
						else {
							while(true) {
								bVar4 = auStack_58.MoveNext();
								pSVar7 = pSStack_48;
								if (!bVar4) break;
								bVar4 = __this_01.Contains((object)pSStack_48);
								if (!bVar4) {
									piVar1 = &__this_01._version;
									*piVar1 = *piVar1 + 1;
									pSVar6 = __this_01._items;
									if (pSVar6 == null) {
										throw new NullReferenceException();
									}
									uVar2 = __this_01._size;
									if (uVar2 < (uint)pSVar6.Length) {
										__this_01._size = uVar2 + 1;
										pSVar6[(int)uVar2] = pSVar7;
									}
									else {
										__this_01.AddWithResize((object)pSVar7);
									}
								}
							}
						}
						auStack_58.Dispose();
						roles = pUStack_40;
					}
					uVar8 = uVar8 + 1;
					uVar2 = (uint)roles.Length;
					uVar5 = (ulong)uVar2;
				} while ((long)uVar8 < (long)(int)uVar2);
			}
			if (__this_01 != null) {
				pSVar6 = (String[])__this_01.ToArray();
				pSVar7 = String.Join(" / ", pSVar6);
				return pSVar7;
			}
		}
	label_059ce86e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x58CE1A0", Offset = "0x58CD1A0", VA = "0x58CE1A0")]
	private bool IsPressed()
	{
		// Lifted from source/cpp/Settings/MobileInput.c (Settings.MobileInput$$IsPressed): 2 lines keep C-only constructs
		Func<bool> pSVar1;
		code *vtableDispatch;
		byte uVar2;
		ulong in_RDX;

		if (this._current != false) {
			return true;
		}
		pSVar1 = this._pressedOverride;
		if (pSVar1 == null) {
			return false;
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		uVar2 = (*vtableDispatch)(pSVar1.method_code,pSVar1.method,in_RDX,vtableDispatch);
		return (bool)uVar2;
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x58CE8A0", Offset = "0x58CD8A0", VA = "0x58CE8A0")]
	public MobileInput()
	{
		// Lifted from source/cpp/Settings/MobileInput.c (Settings.MobileInput$$.ctor): 1 lines keep C-only constructs
		Dictionary<MobileInputLayoutRole, List<string>> __this_00;

		this._pressedFrame = -1;
		this._releasedFrame = -1;
		this._keyDownReturnedFrame = -1;
		this._keyUpReturnedFrame = -1;
		this._oneFrameReleaseFrame = -1;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<MobileInputLayoutRole, List<string>>));
		__this_00 = new Dictionary<Int32Enum, object>();
		this._displayNames = __this_00;
		base();
		return;
	}
}
