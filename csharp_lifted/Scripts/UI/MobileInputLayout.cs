// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputLayout
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputLayout.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Serializable]
[Token(Token = "0x200074F")]
public class MobileInputLayout
{
	[Token(Token = "0x40024EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public int Version;

	[Token(Token = "0x40024EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public string Name;

	[Token(Token = "0x40024ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public string Role;

	[Token(Token = "0x40024EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public bool Builtin;

	[Token(Token = "0x40024EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public List<MobileInputControlLayout> Controls;

	[Token(Token = "0x60046D2")]
	[Address(RVA = "0x5B732B0", Offset = "0x5B722B0", VA = "0x5B732B0")]
	public void AssignRuntimeIds()
	{
		// Lifted from source/cpp/UI/MobileInputLayout.c (UI.MobileInputLayout$$AssignRuntimeIds): clean
		MobileInputControlLayout control;
		String pSVar1;
		List<MobileInputControlLayout> __this_00;
		int local_2c;

		local_2c = 0;
		__this_00 = this.Controls;
		if (__this_00 != null) {
			do {
				if (__this_00._size <= local_2c) {
					return;
				}
				control = __this_00.get_Item(local_2c);
				pSVar1 = local_2c.ToString();
				pSVar1 = String.Concat("control_", pSVar1);
				this.AssignRuntimeId(control, pSVar1);
				local_2c = local_2c + 1;
				__this_00 = this.Controls;
			} while (__this_00 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60046D3")]
	[Address(RVA = "0x5B73380", Offset = "0x5B72380", VA = "0x5B73380")]
	private void AssignRuntimeId(MobileInputControlLayout control, string id)
	{
		// Lifted from source/cpp/UI/MobileInputLayout.c (UI.MobileInputLayout$$AssignRuntimeId): 5 lines keep C-only constructs
		ulong in_RAX;
		MobileInputControlLayout control_00;
		String pSVar1;
		int index;
		List<MobileInputControlLayout> __this_00;
		ulong uStack_38;

		uStack_38 = in_RAX;
		if (control != null) {
			control.Id = id;
			__this_00 = control.Children;
			if (__this_00 == null) {
				return;
			}
			uStack_38 = uStack_38 & 0xffffffff;
			index = 0;
			do {
				if (__this_00._size <= index) {
					return;
				}
				control_00 = __this_00.get_Item(index);
				pSVar1 = (((long)&uStack_38 + 4)).ToString();
				pSVar1 = String.Concat(id, "_child_", pSVar1);
				this.AssignRuntimeId(control_00, pSVar1);
				index = uStack_38._4_4_ + 1;
				__this_00 = control.Children;
				uStack_38 = CONCAT44(index, (undefined4)uStack_38);
			} while (__this_00 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60046D4")]
	[Address(RVA = "0x5B73480", Offset = "0x5B72480", VA = "0x5B73480")]
	public MobileInputLayoutRole GetRole()
	{
		// Lifted from source/cpp/UI/MobileInputLayout.c (UI.MobileInputLayout$$GetRole): clean
		String value;
		bool bVar1;
		int iVar2;
		int local_c;

		local_c = 0;
		value = this.Role;
		bVar1 = Enum.TryParse<MobileInputLayoutRole>(value, ref local_c);
		if (bVar1) {
		}
		return iVar2;
	}

	[Token(Token = "0x60046D5")]
	[Address(RVA = "0x5B73500", Offset = "0x5B72500", VA = "0x5B73500")]
	public bool TryGetRole(out MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileInputLayout.c (UI.MobileInputLayout$$TryGetRole): clean
		String value;
		bool bVar1;

		value = this.Role;
		bVar1 = Enum.TryParse<MobileInputLayoutRole>(value, role);
		return bVar1;
	}

	[Token(Token = "0x60046D6")]
	[Address(RVA = "0x5B73570", Offset = "0x5B72570", VA = "0x5B73570")]
	public MobileInputLayout Clone([Optional] string name, bool builtin = false)
	{
		// Lifted from source/cpp/UI/MobileInputLayout.c (UI.MobileInputLayout$$Clone): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<MobileInputControlLayout> pSVar3;
		MobileInputControlLayout[] pUVar4;
		bool bVar5;
		MobileInputLayout __this_00;
		MobileInputControlLayout item;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		__this_00 = new MobileInputLayout();
		if (__this_00 != null) {
			__this_00.Version = this.Version;
			bVar5 = String.IsNullOrEmpty(name);
			if (bVar5) {
				name = this.Name;
			}
			__this_00.Name = name;
			__this_00.Role = this.Role;
			__this_00.Builtin = builtin;
			pSVar3 = this.Controls;
			if (pSVar3 != null) {
				local_58 = pSVar3.GetEnumerator();
				local_30 = (byte)&local_58;
				while(true) {
					bVar5 = local_58.MoveNext();
					if (!bVar5) {
						local_58.Dispose();
						__this_00.AssignRuntimeIds();
						return __this_00;
					}
					if ((MobileInputControlLayout)local_58._current == null) {
						throw new NullReferenceException();
					}
					pSVar3 = __this_00.Controls;
					item = local_58._current.Clone();
					if (pSVar3 == null) break;
					piVar1 = &pSVar3._version;
					*piVar1 = *piVar1 + 1;
					pUVar4 = pSVar3._items;
					if (pUVar4 == null) break;
					uVar2 = pSVar3._size;
					if (uVar2 < (uint)pUVar4.Length) {
						pSVar3._size = uVar2 + 1;
						pUVar4[(int)uVar2] = item;
					}
					else {
						pSVar3.AddWithResize((object)item);
					}
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60046D7")]
	[Address(RVA = "0x5B737B0", Offset = "0x5B727B0", VA = "0x5B737B0")]
	public MobileInputLayout()
	{
		// Lifted from source/cpp/UI/MobileInputLayout.c (UI.MobileInputLayout$$.ctor): 1 lines keep C-only constructs
		String pSVar1;
		List<MobileInputControlLayout> __this_00;
		Enum local_28;

		this.Name = "Default";
		local_28.klass = (Enum)typeof(MobileInputLayoutRole);
		local_28.monitor = (IntPtr)0xffffffffffffffff;
		pSVar1 = local_28.ToString();
		this.Role = pSVar1;
		__this_00 = new List<MobileInputControlLayout>();
		this.Controls = __this_00;
		base();
		return;
	}
}
