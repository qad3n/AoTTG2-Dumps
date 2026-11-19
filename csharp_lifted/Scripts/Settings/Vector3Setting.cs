// ==================== AoTTG2 cross-reference ====================
// Type: Settings.Vector3Setting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/Vector3Setting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/Vector3Setting.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Settings;

[Token(Token = "0x200011F")]
internal class Vector3Setting : TypedSetting<Vector3>
{
	[Token(Token = "0x6000619")]
	[Address(RVA = "0x5B7D080", Offset = "0x5B7C080", VA = "0x5B7D080")]
	public Vector3Setting()
	{
		// Lifted from source/cpp/Settings/Vector3Setting.c (Settings.Vector3Setting$$.ctor): 1 lines keep C-only constructs
		base((Vector3)ZEXT412(0));
		return;
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x5B7D0C0", Offset = "0x5B7C0C0", VA = "0x5B7D0C0")]
	public Vector3Setting(Vector3 defaultValue)
	{
		// Lifted from source/cpp/Settings/Vector3Setting.c (Settings.Vector3Setting$$.ctor): 3 lines keep C-only constructs
		float fVar1;
		Vector3 value;
		float local_18;

		fVar1 = defaultValue.z;
		base();
		local_18 = defaultValue.x;
		value._0_8_ =local_18.SanitizeValue(this);
		this.DefaultValue.x = (float)(int)value._0_8_;
		this.DefaultValue.y = (float)(int)((ulong)value._0_8_ >> 0x20);
		this.DefaultValue.z = fVar1;
		value.z = fVar1;
		this.Value = value;
		return;
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x5B7D150", Offset = "0x5B7C150", VA = "0x5B7D150", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		// Lifted from source/cpp/Settings/Vector3Setting.c (Settings.Vector3Setting$$SerializeToJsonObject): clean
		float fVar1;
		JSONArray __this_00;
		JSONNumber pSVar2;

		__this_00 = new JSONArray();
		fVar1 = this._value.x;
		pSVar2 = new JSONNumber((double)fVar1);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Add((JSONNode)pSVar2);
		fVar1 = this._value.y;
		pSVar2 = new JSONNumber((double)fVar1);
		__this_00.Add((JSONNode)pSVar2);
		fVar1 = this._value.z;
		pSVar2 = new JSONNumber((double)fVar1);
		__this_00.Add((JSONNode)pSVar2);
		return (JSONNode)__this_00;
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x5B7D2A0", Offset = "0x5B7C2A0", VA = "0x5B7D2A0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
		// Lifted from source/cpp/Settings/Vector3Setting.c (Settings.Vector3Setting$$DeserializeFromJsonObject): 3 lines keep C-only constructs
		JSONArray pSVar1;
		JSONNode pSVar2;
		uint uVar3;
		float fVar4;
		Vector3 value;

		if (json != null) {
			pSVar1 = json.get_AsArray();
			if (pSVar1 != null) {
				pSVar2 = pSVar1.get_Item(0);
				if (pSVar2 != null) {
					value.x =(**(code*)((long)pSVar2.klass + 0x388))(pSVar2,*(ulong)((long)pSVar2.klass + 0x390));
					pSVar2 = pSVar1.get_Item(1);
					if (pSVar2 != null) {
						uVar3 = (**(code*)((long)pSVar2.klass + 0x388))(pSVar2,*(ulong)((long)pSVar2.klass + 0x390));
						pSVar2 = pSVar1.get_Item(2);
						if (pSVar2 != null) {
							fVar4 = (float)(**(code*)((long)pSVar2.klass + 0x388))(pSVar2,*(ulong)((long)pSVar2.klass + 0x390));
							value.y = (float)uVar3;
							value.z = fVar4;
							this.Value = value;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
