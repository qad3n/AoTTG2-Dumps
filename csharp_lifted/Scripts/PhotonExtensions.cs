// ==================== AoTTG2 cross-reference ====================
// Type: PhotonExtensions
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/PhotonExtensions.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Extensions/PhotonExtensions.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

[Token(Token = "0x2000027")]
internal static class PhotonExtensions
{
	[Token(Token = "0x6000112")]
	[Address(RVA = "0x5751270", Offset = "0x5750270", VA = "0x5751270")]
	public static void SetCustomProperty(this Player player, string key, object value)
	{
		// Lifted from source/cpp/PhotonExtensions.c (PhotonExtensions$$SetCustomProperty): clean
		bool bVar1;
		object objA;
		Hashtable pEVar2;

		if ((player != null) &&(pEVar2 = player._CustomProperties_k__BackingField, pEVar2 != null)) {
			bVar1 = pEVar2.ContainsKey((object)key);
			if (bVar1) {
				pEVar2 = player._CustomProperties_k__BackingField;
				if (pEVar2 == null) goto label_05851394;
				objA = pEVar2.get_Item((object)key);
			}
			else {
				objA = null;
			}
			bVar1 = Object.Equals(objA, value);
			if (bVar1) {
				return;
			}
			pEVar2 = new Hashtable();
			if (pEVar2 != null) {
				pEVar2.Add((object)key, value);
				player.SetCustomProperties(pEVar2, null, null);
				return;
			}
		}
	label_05851394: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x5751420", Offset = "0x5750420", VA = "0x5751420")]
	public static void SetCustomProperties(this Player player, Dictionary<string, object> dictionary)
	{
		// Lifted from source/cpp/PhotonExtensions.c (PhotonExtensions$$SetCustomProperties): clean
		int iVar1;
		Hashtable propertiesToSet;

		propertiesToSet = PhotonExtensions.GetChangedProperties(player, dictionary);
		if (propertiesToSet != null) {
			iVar1 = propertiesToSet.Count;
			if (iVar1 < 1) {
				return;
			}
			if (player != null) {
				player.SetCustomProperties(propertiesToSet, null, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x5751830", Offset = "0x5750830", VA = "0x5751830")]
	public static void ForceUpdateProps(this Player player, Dictionary<string, object> dictionary, string firstProperty, string secondProperty)
	{
		// Lifted from source/cpp/PhotonExtensions.c (PhotonExtensions$$ForceUpdateProps): clean
		Hashtable __this;
		object pIVar1;

		__this = PhotonExtensions.GetChangedProperties(player, dictionary);
		if (dictionary != null) {
			pIVar1 = dictionary.get_Item((object)firstProperty);
			if (__this != null) {
				__this.set_Item((object)firstProperty, pIVar1);
				pIVar1 = dictionary.get_Item((object)secondProperty);
				__this.set_Item((object)secondProperty, pIVar1);
				if (player != null) {
					player.SetCustomProperties(__this, null, null);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x57514A0", Offset = "0x57504A0", VA = "0x57514A0")]
	private static Hashtable GetChangedProperties(Player player, Dictionary<string, object> dictionary)
	{
		// Lifted from source/cpp/PhotonExtensions.c (PhotonExtensions$$GetChangedProperties): 12 lines keep C-only constructs
		Hashtable pEVar1;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSVar2;
		bool bVar3;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this;
		object pIVar4;
		object objA;
		object pIVar5;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_68;
		Hashtable local_50;
		byte[] local_48 = new byte[16];
		object local_38;

		local_68._dictionary = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._currentKey = null;
		local_50 = new Hashtable();
		if ((dictionary == null) ||(__this = dictionary.Keys, __this == null)) {
			throw new NullReferenceException();
		}
		local_48.GetEnumerator(__this);
		local_68._currentKey = local_38;
		local_68._dictionary = (Dictionary<TKey, TValue>)local_48._0_8_;
		local_68._index = local_48._8_4_;
		local_68._version = local_48._12_4_;
		local_48._0_8_ = null;
		if (player == null) {
			local_48._8_8_ = &local_68;
			bVar3 = local_68.MoveNext();
			if (bVar3) {
				dictionary.get_Item(local_68._currentKey);
	label_058517b4: ;
				throw new NullReferenceException();
			}
		}
		else {
			local_48._8_8_ = &local_68;
			pSVar2 = &local_68;
			if (local_50 == null) {
				while (true) {
					local_48._8_8_ = pSVar2;
					bVar3 = local_68.MoveNext();
					pIVar5 = local_68._currentKey;
					if (!(bVar3)) break;
					pIVar4 = dictionary.get_Item(local_68._currentKey);
					pEVar1 = player._CustomProperties_k__BackingField;
					if (pEVar1 == null) goto label_058517b4;
					bVar3 = pEVar1.ContainsKey(pIVar5);
					if (bVar3) {
						pEVar1 = player._CustomProperties_k__BackingField;
						if (pEVar1 == null) goto label_058517b4;
						pIVar5 = pEVar1.get_Item(pIVar5);
					}
					else {
						pIVar5 = null;
					}
					bVar3 = Object.Equals(pIVar5, pIVar4);
					pSVar2 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_48._8_8_;
					if (!bVar3) {
						throw new NullReferenceException();
					}
				}
			}
			else {
				while (true) {
					bVar3 = local_68.MoveNext();
					pIVar5 = local_68._currentKey;
					if (!(bVar3)) break;
					pIVar4 = dictionary.get_Item(local_68._currentKey);
					pEVar1 = player._CustomProperties_k__BackingField;
					if (pEVar1 == null) goto label_058517b4;
					bVar3 = pEVar1.ContainsKey(pIVar5);
					if (bVar3) {
						pEVar1 = player._CustomProperties_k__BackingField;
						if (pEVar1 == null) goto label_058517b4;
						objA = pEVar1.get_Item(pIVar5);
					}
					else {
						objA = null;
					}
					bVar3 = Object.Equals(objA, pIVar4);
					if (!bVar3) {
						local_50.Add(pIVar5, pIVar4) ;
					}
				}
			}
		}
		local_68.Dispose();
		return local_50;
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x57513A0", Offset = "0x57503A0", VA = "0x57513A0")]
	public static object GetCustomProperty(this Player player, string key)
	{
		// Lifted from source/cpp/PhotonExtensions.c (PhotonExtensions$$GetCustomProperty): clean
		Hashtable pEVar1;
		bool bVar2;
		object pIVar3;

		if ((player != null) &&(pEVar1 = player._CustomProperties_k__BackingField, pEVar1 != null)) {
			bVar2 = pEVar1.ContainsKey((object)key);
			if (!bVar2) {
				return null;
			}
			pEVar1 = player._CustomProperties_k__BackingField;
			if (pEVar1 != null) {
				pIVar3 = pEVar1.get_Item((object)key);
				return pIVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x57518F0", Offset = "0x57508F0", VA = "0x57518F0")]
	public static int GetIntProperty(this Player player, string key, int defaultValue = 0)
	{
		// Lifted from source/cpp/PhotonExtensions.c (PhotonExtensions$$GetIntProperty): 3 lines keep C-only constructs
		Hashtable pEVar1;
		bool bVar2;
		object obj;
		int piVar3;

		if ((player == null) ||(pEVar1 = player._CustomProperties_k__BackingField, pEVar1 == null)) {
	label_05851978: ;
			throw new NullReferenceException();
		}
		bVar2 = pEVar1.ContainsKey((object)key);
		if (bVar2) {
			pEVar1 = player._CustomProperties_k__BackingField;
			if (pEVar1 == null) goto label_05851978;
			obj = pEVar1.get_Item((object)key);
			if ((obj != null) && (obj.klass == g_data_07556710)) {
				piVar3 = il2cpp_vm_Object_Unbox(obj);
				defaultValue = *piVar3;
			}
		}
		return defaultValue;
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x5751980", Offset = "0x5750980", VA = "0x5751980")]
	public static float GetFloatProperty(this Player player, string key, float defaultValue = 0f)
	{
		// Lifted from source/cpp/PhotonExtensions.c (PhotonExtensions$$GetFloatProperty): 3 lines keep C-only constructs
		Hashtable pEVar1;
		bool bVar2;
		object obj;
		float pfVar3;
		float fStack_14;

		if ((player == null) ||(pEVar1 = player._CustomProperties_k__BackingField, pEVar1 == null)) {
	label_05851a18: ;
			throw new NullReferenceException();
		}
		bVar2 = pEVar1.ContainsKey((object)key);
		if (bVar2) {
			pEVar1 = player._CustomProperties_k__BackingField;
			if (pEVar1 == null) goto label_05851a18;
			obj = pEVar1.get_Item((object)key);
			if ((obj != null) && (obj.klass == g_data_07556740)) {
				pfVar3 = il2cpp_vm_Object_Unbox(obj);
				fStack_14 = *pfVar3;
			}
		}
		return fStack_14;
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x5751A20", Offset = "0x5750A20", VA = "0x5751A20")]
	public static bool GetBoolProperty(this Player player, string key, bool defaultValue = false)
	{
		// Lifted from source/cpp/PhotonExtensions.c (PhotonExtensions$$GetBoolProperty): 3 lines keep C-only constructs
		Hashtable pEVar1;
		bool bVar2;
		object obj;
		sbyte pcVar3;

		if ((player == null) ||(pEVar1 = player._CustomProperties_k__BackingField, pEVar1 == null)) {
	label_05851aac: ;
			throw new NullReferenceException();
		}
		bVar2 = pEVar1.ContainsKey((object)key);
		if (bVar2) {
			pEVar1 = player._CustomProperties_k__BackingField;
			if (pEVar1 == null) goto label_05851aac;
			obj = pEVar1.get_Item((object)key);
			if ((obj != null) && (obj.klass == g_data_075566f0)) {
				pcVar3 = il2cpp_vm_Object_Unbox(obj);
				defaultValue = *pcVar3 != false;
			}
		}
		return defaultValue;
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x5751AC0", Offset = "0x5750AC0", VA = "0x5751AC0")]
	public static string GetStringProperty(this Player player, string key, string defaultValue = "")
	{
		// Lifted from source/cpp/PhotonExtensions.c (PhotonExtensions$$GetStringProperty): 1 lines keep C-only constructs
		Hashtable pEVar1;
		bool bVar2;
		String pSVar3;

		if ((player == null) ||(pEVar1 = player._CustomProperties_k__BackingField, pEVar1 == null)) {
	label_05851c31: ;
			throw new NullReferenceException();
		}
		bVar2 = pEVar1.ContainsKey((object)key);
		if (bVar2) {
			pEVar1 = player._CustomProperties_k__BackingField;
			if (pEVar1 == null) goto label_05851c31;
			pSVar3 = (String)pEVar1.get_Item((object)key);
			if ((pSVar3 != null) && (pSVar3.klass == g_data_07556758)) {
				bVar2 = (key == PlayerProperty.Name);
				if (!bVar2) {
					bVar2 = (key == PlayerProperty.Guild);
					if (!bVar2) {
						return pSVar3;
					}
				}
				pSVar3 = RoleSpriteHelpers.SanitizePlayerText(player, pSVar3);
				return pSVar3;
			}
		}
		return defaultValue;
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x5751C40", Offset = "0x5750C40", VA = "0x5751C40")]
	public static string GetStringProperty(this RoomInfo room, string key, string defaultValue = "")
	{
		// Lifted from source/cpp/PhotonExtensions.c (PhotonExtensions$$GetStringProperty): 1 lines keep C-only constructs
		Hashtable pEVar1;
		bool bVar2;
		String pSVar3;

		if ((room == null) ||(pEVar1 = room.customProperties, pEVar1 == null)) {
	label_05851cc4: ;
			throw new NullReferenceException();
		}
		bVar2 = pEVar1.ContainsKey((object)key);
		if (bVar2) {
			pEVar1 = room.customProperties;
			if (pEVar1 == null) goto label_05851cc4;
			pSVar3 = (String)pEVar1.get_Item((object)key);
			if ((pSVar3 != null) && ((Il2CppClass)pSVar3.klass == g_data_07556758)) {
			}
		}
		return defaultValue;
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x5751CD0", Offset = "0x5750CD0", VA = "0x5751CD0")]
	public static bool GetBoolProperty(this RoomInfo room, string key, bool defaultValue = false)
	{
		// Lifted from source/cpp/PhotonExtensions.c (PhotonExtensions$$GetBoolProperty): 3 lines keep C-only constructs
		Hashtable pEVar1;
		bool bVar2;
		object obj;
		sbyte pcVar3;

		if ((room == null) ||(pEVar1 = room.customProperties, pEVar1 == null)) {
	label_05851d5c: ;
			throw new NullReferenceException();
		}
		bVar2 = pEVar1.ContainsKey((object)key);
		if (bVar2) {
			pEVar1 = room.customProperties;
			if (pEVar1 == null) goto label_05851d5c;
			obj = pEVar1.get_Item((object)key);
			if ((obj != null) && (obj.klass == g_data_075566f0)) {
				pcVar3 = il2cpp_vm_Object_Unbox(obj);
				defaultValue = *pcVar3 != false;
			}
		}
		return defaultValue;
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x5751D70", Offset = "0x5750D70", VA = "0x5751D70")]
	public static bool HasSpawnPoint(this Player player)
	{
		// Lifted from source/cpp/PhotonExtensions.c (PhotonExtensions$$HasSpawnPoint): clean
		bool bVar1;
		String a;

		a = PhotonExtensions.GetStringProperty(player, PlayerProperty.SpawnPoint, "null");
		bVar1 = (a != "null");
		return bVar1;
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x5751DF0", Offset = "0x5750DF0", VA = "0x5751DF0")]
	public static Vector3 GetSpawnPoint(this Player player)
	{
		// Lifted from source/cpp/PhotonExtensions.c (PhotonExtensions$$GetSpawnPoint): 10 lines keep C-only constructs
		Dictionary<int, object> __this;
		bool bVar2;
		int key;
		String __this_00;
		String[] pSVar3;
		Transform __this_01;
		float fVar4;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Vector3 UVar5;
		Vector3 UVar6;
		object local_40;
		float local_38;
		ulong local_28;
		ulong uStack_20;

		local_40 = null;
		local_28._0_4_ = (Vector3.zeroVector).x;
		local_28._4_4_ = (Vector3.zeroVector).y;
		local_38 = (Vector3.zeroVector).z;
		__this_00 = PhotonExtensions.GetStringProperty(player, PlayerProperty.SpawnPoint, "0,0,0");
		if (__this_00 != null) {
			bVar2 = __this_00.Contains(",");
			if (bVar2) {
				pSVar3 = __this_00.Split(0x2c, 0);
				if (pSVar3 != null) {
					if ((int)pSVar3.Length != 0) {
						fVar4 = Single.Parse(pSVar3[0]);
						local_28 = CONCAT44(extraout_XMM0_Db, fVar4);
						uStack_20 = CONCAT44(extraout_XMM0_Dd, extraout_XMM0_Dc);
						if ((pSVar3.Length & 0xfffffffe) != 0) {
							local_38 = Single.Parse(pSVar3[1]);
							if (2 < (uint)pSVar3.Length) {
								fVar4 = Single.Parse(pSVar3[2]);
								local_28._4_4_ = local_38;
								local_38 = fVar4;
								goto label_05851f62;
							}
						}
					}
					throw new IndexOutOfRangeException();
				}
			}
			else {
				__this = (Dictionary<int, object>)MapLoader.IdToMapObject;
				key = Int32.Parse(__this_00);
				if (__this != null) {
					bVar2 = __this.TryGetValue(key, ref local_40);
					if (!bVar2) {
	label_05851f62: ;
						UVar5.y = local_28._4_4_;
						UVar5.x = (float)(undefined4)local_28;
						UVar5.z = local_38;
						return (Vector3)UVar5;
					}
					if ((local_40 != null) && (local_40[1].monitor != null)) {
						__this_01 = local_40[1].monitor.transform;
						if (__this_01 != null) {
							UVar6 = (Vector3)__this_01.position;
							return (Vector3)UVar6;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
