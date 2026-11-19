// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HumanStats
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HumanStats.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanStats.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006C5")]
internal class HumanStats
{
	[Token(Token = "0x4001FD7")]
	[FieldOffset(Offset = "0x10")]
	public int Speed;

	[Token(Token = "0x4001FD8")]
	[FieldOffset(Offset = "0x14")]
	public int Gas;

	[Token(Token = "0x4001FD9")]
	[FieldOffset(Offset = "0x18")]
	public int Ammunition;

	[Token(Token = "0x4001FDA")]
	[FieldOffset(Offset = "0x1C")]
	public int Acceleration;

	[Token(Token = "0x4001FDB")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, BasePerk> Perks;

	[Token(Token = "0x4001FDC")]
	[FieldOffset(Offset = "0x0")]
	public static int MaxPerkPoints;

	[Token(Token = "0x4001FDD")]
	[FieldOffset(Offset = "0x28")]
	public float CurrentGas;

	[Token(Token = "0x4001FDE")]
	[FieldOffset(Offset = "0x2C")]
	public float MaxGas;

	[Token(Token = "0x4001FDF")]
	[FieldOffset(Offset = "0x30")]
	public float GasUsage;

	[Token(Token = "0x4001FE0")]
	[FieldOffset(Offset = "0x34")]
	public float HorseSpeed;

	[Token(Token = "0x4001FE1")]
	[FieldOffset(Offset = "0x38")]
	public float RunSpeed;

	[Token(Token = "0x4001FE2")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x4001FE3")]
	[FieldOffset(Offset = "0x48")]
	public VerticalDashPerk VerticalDashPerk;

	[Token(Token = "0x4001FE4")]
	[FieldOffset(Offset = "0x50")]
	public OmniDashPerk OmniDashPerk;

	[Token(Token = "0x60041F8")]
	[Address(RVA = "0x5AF9090", Offset = "0x5AF8090", VA = "0x5AF9090")]
	public HumanStats(Human human)
	{
		// Lifted from source/cpp/Characters/HumanStats.c (Characters.HumanStats$$.ctor): 4 lines keep C-only constructs
		Dictionary<string, BasePerk>* targetAddress;
		byte bVar1;
		Dictionary<object, object> pSVar2;
		OmniDashPerk pCVar3;
		VerticalDashPerk pCVar4;
		Dictionary<string, BasePerk> __this_00;
		AdvancedAlloyPerk __this_01;
		Dictionary<string, int> pSVar5;
		DurableBladesPerk __this_02;
		RefillTimePerk __this_03;
		VerticalDashPerk __this_04;
		OmniDashPerk __this_05;
		MethodInfo method_00;
		float fVar6;

		this.Speed = 0x50;
		this.Gas = 0x50;
		this.Ammunition = 0x50;
		this.Acceleration = 0x50;
		__this_00 = new Dictionary<string, BasePerk>();
		targetAddress = &this.Perks;
		this.Perks = __this_00;
		this.CurrentGas = -1.0;
		this.MaxGas = -1.0;
		this.GasUsage = 0.2;
		this.HorseSpeed = 50.0;
		base();
		this._human = human;
		pSVar2 = (Dictionary<object, object>)this.Perks;
		pSVar5 = il2cpp_codegen_object_new(typeof(Dictionary<string, int>)) ;
		pSVar5 = new Dictionary<string, int>();
		__this_01.Requirements = pSVar5;
		__this_01 = new AdvancedAlloyPerk();
		__this_01.SetupRequirements();
		if (pSVar2 != null) {
			pSVar2.Add((Il2CppObject *)"AdvancedAlloy", (object)__this_01);
			pSVar2 = (Dictionary<object, object>)*targetAddress;
			pSVar5 = new Dictionary<string, int>();
			__this_02.Requirements = pSVar5;
			__this_02 = new DurableBladesPerk();
			__this_02.SetupRequirements();
			if (pSVar2 == null) goto label_05bf95d0;
			pSVar2.Add((Il2CppObject *)"DurableBlades", (object)__this_02);
			pSVar2 = (Dictionary<object, object>)*targetAddress;
			pSVar5 = new Dictionary<string, int>();
			__this_03.Requirements = pSVar5;
			__this_03 = new RefillTimePerk();
			__this_03.SetupRequirements();
			if (pSVar2 == null) goto label_05bf95d0;
			pSVar2.Add((Il2CppObject *)"RefillTime", (object)__this_03);
			pSVar2 = (Dictionary<object, object>)*targetAddress;
			__this_04 = new VerticalDashPerk();
			if (pSVar2 == null) goto label_05bf95d0;
			pSVar2.Add((Il2CppObject *)"VerticalDash", (object)__this_04);
			pSVar2 = (Dictionary<object, object>)*targetAddress;
			__this_05 = new OmniDashPerk();
			if (pSVar2 == null) goto label_05bf95d0;
			pSVar2.Add((Il2CppObject *)"OmniDash", (object)__this_05);
			if ((Dictionary<object, object>)*targetAddress ==null) goto label_05bf95d0;
			method_00 = (MethodInfo)(*targetAddress).get_Item((Il2CppObject *)"VerticalDash");
			pCVar4 = typeof(VerticalDashPerk);
			if (method_00 == null) {
				this.VerticalDashPerk = null;
			}
			else {
				bVar1 = (typeof(VerticalDashPerk)._2).typeHierarchyDepth;
				if (((((BasePerk)method_00.methodPointer)._2).typeHierarchyDepth < bVar1) ||((((BasePerk)method_00.methodPointer)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(VerticalDashPerk))) goto label_05bf95d5;
				this.VerticalDashPerk = (VerticalDashPerk)method_00;
				if (((((BasePerk)method_00.methodPointer)._2).typeHierarchyDepth < bVar1) ||((((BasePerk)method_00.methodPointer)._2).typeHierarchy[(ulong)bVar1 - 1] !=(Il2CppClass)pCVar4)) goto label_05bf95d5;
			}
			if ((Dictionary<object, object>)*targetAddress !=null) {
				method_00 = (MethodInfo)(*targetAddress).get_Item((Il2CppObject *)"OmniDash");
				pCVar3 = typeof(OmniDashPerk);
				if (method_00 == null) {
					this.OmniDashPerk = null;
	label_05bf9591: ;
					fVar6 = (float)this.Gas;
					fVar6 = fVar6 + fVar6 + -35.0;
					this.MaxGas = fVar6;
					this.CurrentGas = fVar6;
					this.UpdateStats();
					return;
				}
				bVar1 = (typeof(OmniDashPerk)._2).typeHierarchyDepth;
				if ((bVar1 <= (((BasePerk)method_00.methodPointer)._2).typeHierarchyDepth) &&((((BasePerk)method_00.methodPointer)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(OmniDashPerk))) {
					this.OmniDashPerk = (OmniDashPerk)method_00;
					if ((bVar1 <= (((BasePerk)method_00.methodPointer)._2).typeHierarchyDepth) &&((((BasePerk)method_00.methodPointer)._2).typeHierarchy[(ulong)bVar1 - 1] ==(Il2CppClass)pCVar3)) goto label_05bf9591;
				}
	label_05bf95d5: ;
				throw new InvalidCastException();
			}
		}
	label_05bf95d0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041F9")]
	[Address(RVA = "0x5AF98A0", Offset = "0x5AF88A0", VA = "0x5AF98A0")]
	public void DisablePerks()
	{
		// Lifted from source/cpp/Characters/HumanStats.c (Characters.HumanStats$$DisablePerks): 4 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_01;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_38;
		byte local_18;

		local_38._dictionary = null;
		local_38._index = 0;
		local_38._version = 0;
		local_38._currentValue = null;
		__this_00 = (Dictionary<object, object>)this.Perks;
		if (__this_00 != null) {
			__this_01 = __this_00.Values;
			if (__this_01 != null) {
				local_38 = __this_01.GetEnumerator();
				local_18 = (byte)&local_38;
				while(true) {
					bVar1 = local_38.MoveNext();
					if (!bVar1) {
						local_38.Dispose();
						return;
					}
					if (local_38._currentValue == null) break;
					*(uint)((long)&local_38._currentValue[1].klass + 4) = 0;
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041FA")]
	[Address(RVA = "0x5AF9A10", Offset = "0x5AF8A10", VA = "0x5AF9A10")]
	public int GetPerkPoints()
	{
		// Lifted from source/cpp/Characters/HumanStats.c (Characters.HumanStats$$GetPerkPoints): 3 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_00;
		BasePerk pCVar3;
		int iVar4;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_58;
		byte local_30;

		local_58._dictionary = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._currentKey = null;
		pSVar1 = (Dictionary<object, object>)this.Perks;
		if (pSVar1 != null) {
			__this_00 = pSVar1.Keys;
			if (__this_00 != null) {
				local_58 = __this_00.GetEnumerator() ;
				iVar4 = 0;
				local_30 = (byte)&local_58;
				while(true) {
					bVar2 = local_58.MoveNext();
					if (!bVar2) {
						local_58.Dispose();
						return iVar4;
					}
					pSVar1 = (Dictionary<object, object>)this.Perks;
					if (pSVar1 == null) break;
					pCVar3 = pSVar1.get_Item(local_58._currentKey);
					if (pCVar3 == null) {
						throw new NullReferenceException();
					}
					iVar4 = iVar4 + pCVar3.CurrPoints;
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041FB")]
	[Address(RVA = "0x5AF97D0", Offset = "0x5AF87D0", VA = "0x5AF97D0")]
	public void UpdateStats()
	{
		// Lifted from source/cpp/Characters/HumanStats.c (Characters.HumanStats$$UpdateStats): clean
		Human pCVar1;
		BaseComponentCache pUVar2;
		Rigidbody __this_00;
		bool bVar3;
		float fVar4;

		pCVar1 = this._human;
		bVar3 = ((Object)pCVar1 != null);
		if (bVar3) {
			pCVar1 = this._human;
			if (((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) ||(__this_00 = pUVar2.Rigidbody, __this_00 == null)) {
				throw new NullReferenceException();
			}
			fVar4 = (float)this.Acceleration;
			__this_00.mass = (fVar4 + fVar4 + -150.0) * -0.001 + 0.5;
		}
		this.RunSpeed = (float)this.Speed * 0.4 + -16.0;
		return;
	}

	[Token(Token = "0x60041FC")]
	[Address(RVA = "0x5AF97B0", Offset = "0x5AF87B0", VA = "0x5AF97B0")]
	public void ResetGas()
	{
		// Lifted from source/cpp/Characters/HumanStats.c (Characters.HumanStats$$ResetGas): clean
		float fVar1;

		fVar1 = (float)this.Gas;
		fVar1 = fVar1 + fVar1 + -35.0;
		this.MaxGas = fVar1;
		this.CurrentGas = fVar1;
		return;
	}

	[Token(Token = "0x60041FD")]
	[Address(RVA = "0x5AF9BC0", Offset = "0x5AF8BC0", VA = "0x5AF9BC0")]
	public void UseDashGas()
	{
		// Lifted from source/cpp/Characters/HumanStats.c (Characters.HumanStats$$UseDashGas): clean
		float fVar1;

		fVar1 = this.CurrentGas + -4.0;
		if (fVar1 <= 0.0) {
			fVar1 = 0.0;
		}
		this.CurrentGas = fVar1;
		return;
	}

	[Token(Token = "0x60041FE")]
	[Address(RVA = "0x5AF9C00", Offset = "0x5AF8C00", VA = "0x5AF9C00")]
	public void UseFrameGas()
	{
		// Lifted from source/cpp/Characters/HumanStats.c (Characters.HumanStats$$UseFrameGas): clean
		float fVar1;
		float fVar2;

		fVar2 = this.GasUsage;
		fVar1 = Time.deltaTime;
		fVar2 = this.CurrentGas - fVar1 * fVar2;
		if (fVar2 <= 0.0) {
			fVar2 = 0.0;
		}
		this.CurrentGas = fVar2;
		return;
	}

	[Token(Token = "0x60041FF")]
	[Address(RVA = "0x5AEFBD0", Offset = "0x5AEEBD0", VA = "0x5AEFBD0")]
	public void UseHookGas()
	{
		// Lifted from source/cpp/Characters/HumanStats.c (Characters.HumanStats$$UseHookGas): clean
		float fVar1;

		fVar1 = this.CurrentGas - this.GasUsage;
		if (fVar1 <= 0.0) {
			fVar1 = 0.0;
		}
		this.CurrentGas = fVar1;
		return;
	}

	[Token(Token = "0x6004200")]
	[Address(RVA = "0x5AF9C40", Offset = "0x5AF8C40", VA = "0x5AF9C40")]
	public void UseTSGas()
	{
		// Lifted from source/cpp/Characters/HumanStats.c (Characters.HumanStats$$UseTSGas): 1 lines keep C-only constructs
		uint uVar1;
		JSONNode pSVar2;
		long plVar3;
		float fVar4;

		if (Il2CppMethodInitialized_07547647 == false) {
			Il2CppMethodInitialized_07547647 = true;
			uVar1 = (typeof(CharacterData)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CharacterData)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = CharacterData.HumanWeaponInfo;
		}
		else {
			pSVar2 = *(JSONNode*)(typeof(CharacterData)).static_fields ;
		}
		if (((pSVar2 == null) ||(pSVar2 = pSVar2.get_Item("Thunderspear"), pSVar2 == null)) ||(plVar3 = (long)pSVar2.get_Item("StunGasPenalty"), plVar3 == null)) {
			throw new NullReferenceException();
		}
		fVar4 = (float)(**(code*)(*plVar3 + 0x388))(plVar3,*(ulong)(*plVar3 + 0x390));
		fVar4 = fVar4 * -100.0 + this.CurrentGas;
		if (fVar4 <= 0.0) {
			fVar4 = 0.0;
		}
		this.CurrentGas = fVar4;
		return;
	}

	[Token(Token = "0x6004201")]
	[Address(RVA = "0x5AF9BE0", Offset = "0x5AF8BE0", VA = "0x5AF9BE0")]
	private void UseGas(float amount)
	{
		// Lifted from source/cpp/Characters/HumanStats.c (Characters.HumanStats$$UseGas): clean
		float fVar1;

		fVar1 = this.CurrentGas - amount;
		if (fVar1 <= 0.0) {
			fVar1 = 0.0;
		}
		this.CurrentGas = fVar1;
		return;
	}

	[Token(Token = "0x6004202")]
	[Address(RVA = "0x5AF9D50", Offset = "0x5AF8D50", VA = "0x5AF9D50")]
	public static HumanStats Deserialize(HumanStats stats, string str)
	{
		// Lifted from source/cpp/Characters/HumanStats.c (Characters.HumanStats$$Deserialize): 9 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		Human human;
		bool bVar2;
		int iVar3;
		JSONNode pSVar4;
		JSONNode pSVar5;
		String key;
		BasePerk pCVar6;
		HumanStats __this;
		float fVar7;
		JSONNode.Enumerator local_110;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		local_78.m_Array._list = null;
		local_78.m_Array._index = 0;
		local_78.m_Array._version = 0;
		local_78.m_Object._current.value = null;
		local_78.m_Object._getEnumeratorRetType = 0;
		local_78.m_Object._36_4_ = 0;
		local_78.m_Object._version = 0;
		local_78.m_Object._index = 0;
		local_78.m_Object._current.key = null;
		local_78.type = 0;
		local_78._4_4_ = 0;
		local_78.m_Object._dictionary = null;
		local_78.m_Array._current = null;
		local_c8.m_Array._list = null;
		local_c8.m_Array._index = 0;
		local_c8.m_Array._version = 0;
		local_c8.m_Object._current.value = null;
		local_c8.m_Object._getEnumeratorRetType = 0;
		local_c8.m_Object._36_4_ = 0;
		local_c8.m_Object._version = 0;
		local_c8.m_Object._index = 0;
		local_c8.m_Object._current.key = null;
		local_c8.type = 0;
		local_c8._4_4_ = 0;
		local_c8.m_Object._dictionary = null;
		local_c8.m_Array._current = null;
		bVar2 = (str != (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar2) {
			pSVar4 = JSON.Parse(str);
			if (pSVar4 == null) {
				throw new NullReferenceException();
			}
			pSVar5 = pSVar4.get_Item("Speed");
			if (pSVar5 == null) {
				throw new NullReferenceException();
			}
			iVar3 = pSVar5.get_AsInt();
			if (stats == null) {
				throw new NullReferenceException();
			}
			stats.Speed = iVar3;
			pSVar5 = pSVar4.get_Item("Gas");
			if (pSVar5 == null) {
				throw new NullReferenceException();
			}
			iVar3 = pSVar5.get_AsInt();
			stats.Gas = iVar3;
			pSVar5 = pSVar4.get_Item("Ammunition");
			if (pSVar5 == null) {
				throw new NullReferenceException();
			}
			iVar3 = pSVar5.get_AsInt();
			stats.Ammunition = iVar3;
			pSVar5 = pSVar4.get_Item("Acceleration");
			if (pSVar5 == null) {
				throw new NullReferenceException();
			}
			iVar3 = pSVar5.get_AsInt();
			stats.Acceleration = iVar3;
			pSVar5 = pSVar4.get_Item("Perks");
			if (pSVar5 == null) {
				throw new NullReferenceException();
			}
			local_110 = pSVar5.Keys;
			local_c8.m_Array._current = local_110.m_Array._current;
			local_c8.m_Array._list = local_110.m_Array._list;
			local_c8.m_Array._index = local_110.m_Array._index;
			local_c8.m_Array._version = local_110.m_Array._version;
			local_c8.m_Object._current.value = local_110.m_Object._current.value;
			local_c8.m_Object._getEnumeratorRetType = local_110.m_Object._getEnumeratorRetType;
			local_c8.m_Object._36_4_ = local_110.m_Object._36_4_;
			local_c8.m_Object._version = local_110.m_Object._version;
			local_c8.m_Object._index = local_110.m_Object._index;
			local_c8.m_Object._current.key = local_110.m_Object._current.key;
			local_c8.type = local_110.type;
			local_c8._4_4_ = local_110._4_4_;
			local_c8.m_Object._dictionary = local_110.m_Object._dictionary;
			local_110 = local_c8.GetEnumerator();
			local_78.m_Array._current = local_110.m_Array._current;
			local_78.m_Array._list = local_110.m_Array._list;
			local_78.m_Array._index = local_110.m_Array._index;
			local_78.m_Array._version = local_110.m_Array._version;
			local_78.m_Object._current.value = local_110.m_Object._current.value;
			local_78.m_Object._getEnumeratorRetType = local_110.m_Object._getEnumeratorRetType;
			local_78.m_Object._36_4_ = local_110.m_Object._36_4_;
			local_78.m_Object._version = local_110.m_Object._version;
			local_78.m_Object._index = local_110.m_Object._index;
			local_78.m_Object._current.key = local_110.m_Object._current.key;
			local_78.type = local_110.type;
			local_78._4_4_ = local_110._4_4_;
			local_78.m_Object._dictionary = local_110.m_Object._dictionary;
			while(true) {
				bVar2 = local_78.MoveNext();
				if (!bVar2) break;
				key = local_78.Current;
				pSVar1 = (Dictionary<object, object>)stats.Perks;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				bVar2 = pSVar1.ContainsKey((object)key);
				if (bVar2) {
					pSVar1 = (Dictionary<object, object>)stats.Perks;
					if (pSVar1 == null) {
						throw new NullReferenceException();
					}
					pCVar6 = pSVar1.get_Item((object)key);
					pSVar5 = pSVar4.get_Item("Perks");
					if (pSVar5 == null) {
						throw new NullReferenceException();
					}
					pSVar5 = pSVar5.get_Item(key);
					if (pSVar5 == null) {
						throw new NullReferenceException();
					}
					iVar3 = (**(code*)((long)pSVar5.klass + 0x368))(pSVar5);
					if (pCVar6 == null) {
						throw new NullReferenceException();
					}
					pCVar6.CurrPoints = iVar3;
				}
			}
			bVar2 = stats.Validate();
			if (bVar2) {
				fVar7 = (float)stats.Gas;
				fVar7 = fVar7 + fVar7 + -35.0;
				stats.MaxGas = fVar7;
				stats.CurrentGas = fVar7;
				stats.UpdateStats();
				return stats;
			}
		}
		else if (stats == null) {
			throw new NullReferenceException();
		}
		human = stats._human;
		__this = new HumanStats(human);
		return __this;
	}

	[Token(Token = "0x6004203")]
	[Address(RVA = "0x5AFA4E0", Offset = "0x5AF94E0", VA = "0x5AFA4E0")]
	public string Serialize()
	{
		// Lifted from source/cpp/Characters/HumanStats.c (Characters.HumanStats$$Serialize): 7 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		object pIVar2;
		bool bVar3;
		JSONObject __this_00;
		String pSVar4;
		JSONNode pSVar5;
		JSONObject __this_01;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_02;
		BasePerk pCVar6;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_68;
		byte[] local_48 = new byte[16];
		String local_38;

		local_68._dictionary = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._currentKey = null;
		bVar3 = this.Validate();
		if (!bVar3) {
			this.Speed = 0x50;
			this.Gas = 0x50;
			this.Ammunition = 0x50;
			this.Acceleration = 0x50;
			pSVar1 = (Dictionary<object, object>)this.Perks;
			if (pSVar1 == null) goto label_05bfa943;
			pSVar1.Clear();
		}
		__this_00 = new JSONObject();
		pSVar4 = (this.Speed).ToString();
		pSVar5 = ((JSONNode)pSVar4);
		if (__this_00 != null) {
			__this_00.set_Item("Speed", pSVar5);
			pSVar4 = (this.Gas).ToString();
			pSVar5 = ((JSONNode)pSVar4);
			__this_00.set_Item("Gas", pSVar5);
			pSVar4 = (this.Ammunition).ToString();
			pSVar5 = ((JSONNode)pSVar4);
			__this_00.set_Item("Ammunition", pSVar5);
			pSVar4 = (this.Acceleration).ToString();
			pSVar5 = ((JSONNode)pSVar4);
			__this_00.set_Item("Acceleration", pSVar5);
			__this_01 = new JSONObject();
			pSVar1 = (Dictionary<object, object>)this.Perks;
			if (pSVar1 != null) {
				__this_02 = pSVar1.Keys ;
				if (__this_02 != null) {
					local_48.GetEnumerator(__this_02);
					local_68._currentKey = (object)local_38;
					local_68._dictionary = (Dictionary<TKey, TValue>)local_48._0_8_;
					local_68._index = local_48._8_4_;
					local_68._version = local_48._12_4_;
					local_48._0_8_ = null;
					local_48._8_8_ = &local_68;
					if (__this_01 == null) {
						do {
							bVar3 = local_68.MoveNext();
							pIVar2 = local_68._currentKey;
							if (!bVar3) goto label_05bfa8c6;
							pSVar1 = (Dictionary<object, object>)this.Perks;
							if (pSVar1 == null) goto label_05bfa924;
							pCVar6 = pSVar1.get_Item(local_68._currentKey);
							if (pCVar6 == null) goto label_05bfa929;
						} while (pCVar6.CurrPoints < 1);
						pSVar1 = (Dictionary<object, object>)this.Perks;
						if (pSVar1 != null) {
							pCVar6 = pSVar1.get_Item(pIVar2);
							if (pCVar6 != null) {
								pSVar4 = (pCVar6.CurrPoints).ToString();
								((JSONNode)pSVar4);
								throw new NullReferenceException();
							}
	label_05bfa93e: ;
							throw new NullReferenceException();
						}
	label_05bfa8c1: ;
						throw new NullReferenceException();
					}
					do {
						do {
							bVar3 = local_68.MoveNext();
							pIVar2 = local_68._currentKey;
							if (!bVar3) {
	label_05bfa8c6: ;
								local_68.Dispose();
								__this_00.set_Item("Perks", (JSONNode)__this_01);
								pSVar4 = __this_00.ToString();
								return pSVar4;
							}
							pSVar1 = (Dictionary<object, object>)this.Perks;
							if (pSVar1 == null) {
	label_05bfa924: ;
								throw new NullReferenceException();
							}
							pCVar6 = pSVar1.get_Item(local_68._currentKey);
							if (pCVar6 == null) {
	label_05bfa929: ;
								throw new NullReferenceException();
							}
						} while (pCVar6.CurrPoints < 1);
						pSVar1 = (Dictionary<object, object>)this.Perks;
						if (pSVar1 == null) goto label_05bfa8c1;
						pCVar6 = pSVar1.get_Item(pIVar2);
						if (pCVar6 == null) goto label_05bfa93e;
						pSVar4 = (pCVar6.CurrPoints).ToString();
						pSVar5 = ((JSONNode)pSVar4);
						__this_01.set_Item((String)pIVar2, pSVar5) ;
					} while(true);
				}
			}
		}
	label_05bfa943: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004204")]
	[Address(RVA = "0x5AFA2D0", Offset = "0x5AF92D0", VA = "0x5AFA2D0")]
	public bool Validate()
	{
		// Lifted from source/cpp/Characters/HumanStats.c (Characters.HumanStats$$Validate): 7 lines keep C-only constructs
		int iVar1;
		int iVar2;
		int iVar3;
		int iVar4;
		Dictionary<object, object> __this_00;
		bool bVar5;
		sbyte cVar6;
		int iVar7;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_01;
		ulong local_48;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_40;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_38;

		local_38._dictionary = null;
		local_38._index = 0;
		local_38._version = 0;
		local_38._currentValue = null;
		iVar1 = this.Speed;
		iVar2 = this.Gas;
		iVar3 = this.Ammunition;
		iVar4 = this.Acceleration;
		if ((((((0x140 < iVar2 + iVar1 + iVar3 + iVar4) || (iVar1 < 0x32)) || (100 < iVar1)) ||((iVar2 < 0x32 || (100 < iVar2)))) || ((iVar3 < 0x32 || ((100 < iVar3 || (iVar4 < 0x32)))))) ||(100 < iVar4)) {
			return false;
		}
		__this_00 = (Dictionary<object, object>)this.Perks;
		if ((__this_00 == null) ||(__this_01 = __this_00.Values, __this_01 == null)) {
			throw new NullReferenceException();
		}
		local_38 = __this_01.GetEnumerator();
		local_48 = 0;
		local_40 = &local_38;
		while(true) {
			bVar5 = local_38.MoveNext();
			if (!bVar5) {
				il2cpp_runtime_helper_02fd8f20(&local_48);
				iVar7 = this.GetPerkPoints();
				return iVar7 <= HumanStats.MaxPerkPoints;
			}
			if (local_38._currentValue == null) break;
			cVar6 = (*(local_38._currentValue).klass.vtable[8].methodPtr)(local_38._currentValue,this.Perks,(local_38._currentValue).klass.vtable[8].method);
			if (cVar6 == false) {
				il2cpp_runtime_helper_02fd8f20(&local_48);
				return false;
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/HumanStats.c.

	// Characters.HumanStats$$.cctor: clean
	static HumanStats()
	{
		HumanStats.MaxPerkPoints = 3;
		return;
	}
}
