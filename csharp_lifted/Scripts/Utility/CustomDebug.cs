// ==================== AoTTG2 cross-reference ====================
// Type: Utility.CustomDebug
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/CustomDebug.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x2000906")]
public class CustomDebug : MonoBehaviour
{
	[Token(Token = "0x2000907")]
	[CompilerGenerated]
	private sealed class _003CDrawLineCoroutine_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002DA3")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002DA4")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002DA5")]
		[FieldOffset(Offset = "0x20")]
		public Vector3 start;

		[Token(Token = "0x4002DA6")]
		[FieldOffset(Offset = "0x2C")]
		public Vector3 end;

		[Token(Token = "0x4002DA7")]
		[FieldOffset(Offset = "0x38")]
		public Color color;

		[Token(Token = "0x4002DA8")]
		[FieldOffset(Offset = "0x48")]
		public float duration;

		[Token(Token = "0x4002DA9")]
		[FieldOffset(Offset = "0x50")]
		private GameObject _003ClineObj_003E5__2;

		[Token(Token = "0x17000EE4")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60055CE")]
			[Address(RVA = "0x5CDE7C0", Offset = "0x5CDD7C0", VA = "0x5CDE7C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000EE5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60055D0")]
			[Address(RVA = "0x5CDE810", Offset = "0x5CDD810", VA = "0x5CDE810", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60055CB")]
		[Address(RVA = "0x5CDE4A0", Offset = "0x5CDD4A0", VA = "0x5CDE4A0")]
		[DebuggerHidden]
		public _003CDrawLineCoroutine_003Ed__17(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug.<DrawLineCoroutine>d__17$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60055CC")]
		[Address(RVA = "0x5CDE560", Offset = "0x5CDD560", VA = "0x5CDE560", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60055CD")]
		[Address(RVA = "0x5CDE570", Offset = "0x5CDD570", VA = "0x5CDE570", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug.<DrawLineCoroutine>d__17$$MoveNext): 1 lines keep C-only constructs
			Color pUVar1;
			float seconds;
			int iVar2;
			Object obj;
			Color value;
			GameObject pUVar3;
			LineRenderer __this_00;
			Shader shader;
			Material __this_01;
			WaitForSeconds __this_02;

			iVar2 = this.__1__state;
			if (iVar2 == 0) {
				this.__1__state = -1;
				pUVar3 = new GameObject("DebugLine");
				this._lineObj_5__2 = pUVar3;
				pUVar3 = this._lineObj_5__2;
				if (pUVar3 != null) {
					__this_00 = pUVar3.AddComponent<LineRenderer>();
					if (__this_00 != null) {
						__this_00.positionCount = 2;
						__this_00.SetPosition(0, (Vector3)this.start);
						__this_00.SetPosition(1, (Vector3)this.end);
						shader = Shader.Find("Sprites/Default");
						__this_01 = new Material(shader);
						__this_00.material = __this_01;
						pUVar1 = &this.color;
						value = pUVar1.fields;
						__this_00.endColor = (Color)pUVar1.fields;
						__this_00.startColor = (Color)value;
						__this_00.endWidth = 0.05;
						__this_00.startWidth = 0.05;
						seconds = this.duration;
						__this_02 = new WaitForSeconds(seconds);
						this.__2__current = (object)__this_02;
						this.__1__state = 1;
						goto label_05dde7a9;
					}
				}
				throw new NullReferenceException();
			}
			if (iVar2 == 1) {
				this.__1__state = -1;
				obj = (Object)this._lineObj_5__2;
				Object.Destroy(obj);
			}
		label_05dde7a9: ;
			return iVar2 == 0;
		}

		[Token(Token = "0x60055CF")]
		[Address(RVA = "0x5CDE7D0", Offset = "0x5CDD7D0", VA = "0x5CDE7D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Utility_CustomDebug_DrawLineCoroutine_d__17_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000908")]
	[CompilerGenerated]
	private sealed class _003CSpawnPrimitiveCoroutine_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002DAA")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002DAB")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002DAC")]
		[FieldOffset(Offset = "0x20")]
		public CustomDebug _003C_003E4__this;

		[Token(Token = "0x4002DAD")]
		[FieldOffset(Offset = "0x28")]
		public PrimitiveType type;

		[Token(Token = "0x4002DAE")]
		[FieldOffset(Offset = "0x2C")]
		public Vector3 position;

		[Token(Token = "0x4002DAF")]
		[FieldOffset(Offset = "0x38")]
		public Quaternion Rotation;

		[Token(Token = "0x4002DB0")]
		[FieldOffset(Offset = "0x48")]
		public Vector3 size;

		[Token(Token = "0x4002DB1")]
		[FieldOffset(Offset = "0x54")]
		public Color color;

		[Token(Token = "0x4002DB2")]
		[FieldOffset(Offset = "0x64")]
		public float duration;

		[Token(Token = "0x4002DB3")]
		[FieldOffset(Offset = "0x68")]
		private GameObject _003Cobj_003E5__2;

		[Token(Token = "0x17000EE6")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60055D4")]
			[Address(RVA = "0x5CDE980", Offset = "0x5CDD980", VA = "0x5CDE980", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000EE7")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60055D6")]
			[Address(RVA = "0x5CDE9D0", Offset = "0x5CDD9D0", VA = "0x5CDE9D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60055D1")]
		[Address(RVA = "0x5CDE4C0", Offset = "0x5CDD4C0", VA = "0x5CDE4C0")]
		[DebuggerHidden]
		public _003CSpawnPrimitiveCoroutine_003Ed__18(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60055D2")]
		[Address(RVA = "0x5CDE820", Offset = "0x5CDD820", VA = "0x5CDE820", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60055D3")]
		[Address(RVA = "0x5CDE830", Offset = "0x5CDD830", VA = "0x5CDE830", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$MoveNext): 2 lines keep C-only constructs
			float seconds;
			int iVar1;
			Object pUVar2;
			bool bVar3;
			GameObject pUVar4;
			WaitForSeconds __this_00;
			WaitForSeconds* __this_01;

			__this_01 = (WaitForSeconds*)this;
			if (Il2CppMethodInitialized_0754826c == false) {
				__this_01 = &typeof(WaitForSeconds);
				Il2CppMethodInitialized_0754826c = true;
			}
			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				if (this.__4__this == null) {
					throw new NullReferenceException();
				}
				pUVar4 = __this_01.SpawnPrimitiveObject(this.type, (Vector3)this.position, (Quaternion)this.Rotation, (Vector3)this.size, (Color)this.color);
				this._obj_5__2 = pUVar4;
				seconds = this.duration;
				__this_00 = new WaitForSeconds(seconds);
				this.__2__current = (object)__this_00;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				pUVar2 = (Object)this._obj_5__2;
				bVar3 = (pUVar2 != null);
				if (bVar3) {
					pUVar2 = (Object)this._obj_5__2;
					Object.Destroy(pUVar2);
				}
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x60055D5")]
		[Address(RVA = "0x5CDE990", Offset = "0x5CDD990", VA = "0x5CDE990", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4002DA1")]
	[FieldOffset(Offset = "0x0")]
	private static CustomDebug _instance;

	[Token(Token = "0x4002DA2")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<string, GameObject> _debugObjects;

	[Token(Token = "0x60055B7")]
	[Address(RVA = "0x5CDC680", Offset = "0x5CDB680", VA = "0x5CDC680")]
	public static void Init()
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$Init): clean
		CustomDebug pUVar1;

		pUVar1 = SingletonFactory.CreateSingleton<CustomDebug>((object)CustomDebug._instance);
		CustomDebug._instance = pUVar1;
		return;
	}

	[Token(Token = "0x60055B8")]
	[Address(RVA = "0x5CDC6F0", Offset = "0x5CDB6F0", VA = "0x5CDC6F0")]
	public static void RemoveDebugVisual(string name)
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$RemoveDebugVisual): clean
		CustomDebug pUVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		Object obj;

		pUVar1 = CustomDebug._instance;
		if ((pUVar1 != null) &&(pSVar2 = (Dictionary<object, object>)pUVar1._debugObjects, pSVar2 != null)) {
			bVar3 = pSVar2.ContainsKey((object)name);
			if (!bVar3) {
				return;
			}
			pUVar1 = CustomDebug._instance;
			if ((pUVar1 != null) &&(pSVar2 = (Dictionary<object, object>)pUVar1._debugObjects, pSVar2 != null)) {
				obj = (Object)pSVar2.get_Item((object)name);
				Object.Destroy(obj);
				pUVar1 = CustomDebug._instance;
				if ((pUVar1 != null) &&(pSVar2 = (Dictionary<object, object>)pUVar1._debugObjects, pSVar2 != null)) {
					pSVar2.Remove((object)name);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60055B9")]
	[Address(RVA = "0x5CDC820", Offset = "0x5CDB820", VA = "0x5CDC820")]
	public static string DrawRay(Vector3 origin, Vector3 direction, Color color, string name)
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$DrawRay): clean
		Dictionary<object, object> __this;
		Object __this_00;
		String key;
		CustomDebug pUVar1;
		Vector3 end;
		float fStack_48;
		float fStack_44;

		pUVar1 = (CustomDebug)name;
		CustomDebug.RemoveDebugVisual(name);
		if (CustomDebug._instance != null) {
			end.z = direction.z + origin.z;
			fStack_48 = direction.x;
			fStack_44 = direction.y;
			end.x = fStack_48 + origin.x;
			end.y = fStack_44 + origin.y;
			__this_00 = (Object)pUVar1.DrawLineObject(origin, end, color, 0.0);
			if (__this_00 != null) {
				__this_00.name = name;
				pUVar1 = CustomDebug._instance;
				if (pUVar1 != null) {
					__this = (Dictionary<object, object>)pUVar1._debugObjects;
					key = __this_00.name;
					if (__this != null) {
						__this.Add((object)key, (object)__this_00);
						return name;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60055BA")]
	[Address(RVA = "0x5CDCB10", Offset = "0x5CDBB10", VA = "0x5CDCB10")]
	public static string DrawLine(Vector3 start, Vector3 end, Color color, string name)
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$DrawLine): clean
		Dictionary<object, object> __this;
		Object __this_00;
		String key;
		CustomDebug pUVar1;

		pUVar1 = (CustomDebug)name;
		CustomDebug.RemoveDebugVisual(name);
		if (CustomDebug._instance != null) {
			__this_00 = (Object)pUVar1.DrawLineObject(start, end, color, 0.0) ;
			if (__this_00 != null) {
				__this_00.name = name;
				pUVar1 = CustomDebug._instance;
				if (pUVar1 != null) {
					__this = (Dictionary<object, object>)pUVar1._debugObjects;
					key = __this_00.name;
					if (__this != null) {
						__this.Add((object)key, (object)__this_00);
						return name;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60055BB")]
	[Address(RVA = "0x5CDCC20", Offset = "0x5CDBC20", VA = "0x5CDCC20")]
	public static string SpawnCube(Vector3 position, Color color, string name)
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$SpawnCube): 4 lines keep C-only constructs
		CustomDebug pUVar1;
		Dictionary<object, object> __this;
		Quaternion Rotation;
		Object __this_00;
		String key;
		Quaternion* ppUVar2;
		Vector3* __this_01;

		__this_01 = (Vector3*)name;
		CustomDebug.RemoveDebugVisual(name);
		pUVar1 = CustomDebug._instance;
		if (Il2CppMethodInitialized_0753e72b == false) {
			ppUVar2 = &typeof(Quaternion);
			Il2CppMethodInitialized_0753e72b = true;
			__this_01 = (Vector3*)ppUVar2;
		}
		Rotation = *(Quaternion)typeof(Quaternion).static_fields;
		if (Il2CppMethodInitialized_0753e4b7 == false) {
			__this_01 = &typeof(Vector3);
			Il2CppMethodInitialized_0753e4b7 = true;
		}
		if (pUVar1 != null) {
			__this_00 = (Object)__this_01.SpawnPrimitiveObject(3, position, (Quaternion)Rotation, (Vector3)(Vector3.oneVector), color);
			if (__this_00 != null) {
				__this_00.name = name;
				pUVar1 = CustomDebug._instance;
				if (pUVar1 != null) {
					__this = (Dictionary<object, object>)pUVar1._debugObjects;
					key = __this_00.name;
					if (__this != null) {
						__this.Add((object)key, (object)__this_00);
						return name;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60055BC")]
	[Address(RVA = "0x5CDCFE0", Offset = "0x5CDBFE0", VA = "0x5CDCFE0")]
	public static string SpawnSphere(Vector3 position, float radius, Color color, string name)
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$SpawnSphere): 3 lines keep C-only constructs
		CustomDebug pUVar1;
		Dictionary<object, object> __this;
		Object __this_00;
		String key;
		Quaternion* __this_01;
		Vector3 size;

		__this_01 = (Quaternion*)name;
		CustomDebug.RemoveDebugVisual(name);
		pUVar1 = CustomDebug._instance;
		if (Il2CppMethodInitialized_0753e72b == false) {
			__this_01 = &typeof(Quaternion);
			Il2CppMethodInitialized_0753e72b = true;
		}
		if (pUVar1 != null) {
			size.y = radius;
			size.x = radius;
			size.z = radius;
			__this_00 = (Object)__this_01.SpawnPrimitiveObject(0, position, (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields, size, color);
			if (__this_00 != null) {
				__this_00.name = name;
				pUVar1 = CustomDebug._instance;
				if (pUVar1 != null) {
					__this = (Dictionary<object, object>)pUVar1._debugObjects;
					key = __this_00.name;
					if (__this != null) {
						__this.Add((object)key, (object)__this_00);
						return name;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60055BD")]
	[Address(RVA = "0x5CDD120", Offset = "0x5CDC120", VA = "0x5CDD120")]
	public static string SpawnCylinder(Vector3 position, float radius, float height, Color color, string name)
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$SpawnCylinder): 3 lines keep C-only constructs
		CustomDebug pUVar1;
		Dictionary<object, object> __this;
		Object __this_00;
		String key;
		Quaternion* __this_01;
		Vector3 size;

		__this_01 = (Quaternion*)name;
		CustomDebug.RemoveDebugVisual(name);
		pUVar1 = CustomDebug._instance;
		if (Il2CppMethodInitialized_0753e72b == false) {
			__this_01 = &typeof(Quaternion);
			Il2CppMethodInitialized_0753e72b = true;
		}
		if (pUVar1 != null) {
			size.y = height;
			size.x = radius;
			size.z = radius;
			__this_00 = (Object)__this_01.SpawnPrimitiveObject(2, position, (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields, size, color);
			if (__this_00 != null) {
				__this_00.name = name;
				pUVar1 = CustomDebug._instance;
				if (pUVar1 != null) {
					__this = (Dictionary<object, object>)pUVar1._debugObjects;
					key = __this_00.name;
					if (__this != null) {
						__this.Add((object)key, (object)__this_00);
						return name;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60055BE")]
	[Address(RVA = "0x5CDD260", Offset = "0x5CDC260", VA = "0x5CDD260")]
	public static string SpawnCapsule(Vector3 position, float radius, float height, Color color, string name)
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$SpawnCapsule): 3 lines keep C-only constructs
		CustomDebug pUVar1;
		Dictionary<object, object> __this;
		Object __this_00;
		String key;
		Quaternion* __this_01;
		Vector3 size;

		__this_01 = (Quaternion*)name;
		CustomDebug.RemoveDebugVisual(name);
		pUVar1 = CustomDebug._instance;
		if (Il2CppMethodInitialized_0753e72b == false) {
			__this_01 = &typeof(Quaternion);
			Il2CppMethodInitialized_0753e72b = true;
		}
		if (pUVar1 != null) {
			size.y = height;
			size.x = radius;
			size.z = radius;
			__this_00 = (Object)__this_01.SpawnPrimitiveObject(1, position, (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields, size, color);
			if (__this_00 != null) {
				__this_00.name = name;
				pUVar1 = CustomDebug._instance;
				if (pUVar1 != null) {
					__this = (Dictionary<object, object>)pUVar1._debugObjects;
					key = __this_00.name;
					if (__this != null) {
						__this.Add((object)key, (object)__this_00);
						return name;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60055BF")]
	[Address(RVA = "0x5CDD3A0", Offset = "0x5CDC3A0", VA = "0x5CDD3A0")]
	public static string SpawnCapsuleCollder(CapsuleCollider capsule, Color color, string name)
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$SpawnCapsuleCollder): 15 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		float fVar3;
		uint uVar4;
		CustomDebug pUVar5;
		UnityEngine_Vector3_StaticFields pUVar6;
		Dictionary<object, object> __this;
		bool bVar7;
		int iVar8;
		Transform pUVar9;
		Object __this_00;
		GameObject __this_01;
		GameObject __this_02;
		Transform pUVar10;
		Vector3* ppUVar12;
		Quaternion* __this_03;
		float fVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Vector3 UVar17;
		Vector3 UVar18;
		Vector3 UVar19;
		Vector3 UVar20;
		Vector3 position;
		Quaternion Rotation;
		float fStack_b8;
		float fStack_98;
		float fStack_94;
		Vector3 UStack_68;
		byte[] auStack_58 = new byte[16];
		byte[] auStack_48 = new byte[24];

		pUVar5 = CustomDebug._instance;
		bVar7 = ((Object)pUVar5 == null);
		if (!bVar7) {
			bVar7 = ((Object)capsule == null);
			if (!bVar7) {
				if (capsule != null) {
					pUVar9 = capsule.transform;
					UVar17 = capsule.center;
					if (pUVar9 != null) {
						UVar17 = pUVar9.TransformPoint(UVar17);
						fVar13 = capsule.radius;
						UVar18 = pUVar9.lossyScale;
						UVar19 = pUVar9.lossyScale;
						fVar14 = capsule.height;
						UVar20 = pUVar9.lossyScale;
						auStack_48._8_4_ = extraout_XMM0_Dc;
						auStack_48._0_8_ = UVar20._0_8_;
						auStack_48._12_4_ = extraout_XMM0_Dd;
						pUVar6 = typeof(Vector3).static_fields;
						fVar1 = (pUVar6.upVector).x;
						fVar3 = (pUVar6.upVector).y;
						fVar16 = (pUVar6.upVector).z;
						iVar8 = capsule.direction;
						if (iVar8 == 2) {
							UVar20 = pUVar9.forward;
							fVar16 = UVar20.z;
							fVar1 = UVar20.x;
							fVar3 = UVar20.y;
						}
						else if (iVar8 == 1) {
							UVar20 = pUVar9.up;
							fVar16 = UVar20.z;
							fVar1 = UVar20.x;
							fVar3 = UVar20.y;
						}
						else if (iVar8 == 0) {
							UVar20 = pUVar9.right;
							fVar16 = UVar20.z;
							fVar1 = UVar20.x;
							fVar3 = UVar20.y;
						}
						auStack_58._0_8_ = CONCAT44(fVar3, fVar1);
						auStack_58._8_4_ = fVar16;
						pUVar6 = typeof(Vector3).static_fields;
						UStack_68.x = (pUVar6.upVector).x;
						UStack_68.y = (pUVar6.upVector).y;
						UStack_68.z = (pUVar6.upVector).z;
						__this_03 = (Quaternion*)auStack_58;
						Rotation = Quaternion.Internal_LookRotation((Vector3)__this_03, ref UStack_68);
						if (CustomDebug._instance != null) {
							fStack_b8 = UVar18.x;
							if (fStack_b8 <= UVar19.z) {
								fStack_b8 = UVar19.z;
							}
							fVar13 = fVar13 * fStack_b8;
							UVar18.z = fVar13 + fVar13;
							fVar15 = fVar14 * (float)auStack_48._4_4_ - UVar18.z;
							fVar14 = 0.0;
							if (0.0 <= fVar15) {
								fVar14 = fVar15;
							}
							UVar18.y = fVar14 * 0.5;
							UVar18.x = UVar18.z;
							__this_00 = (Object)__this_03.SpawnPrimitiveObject(2, UVar17, Rotation, UVar18, color);
							if (Il2CppMethodInitialized_0753e4b7 == false) {
								ppUVar12 = &typeof(Vector3);
								Il2CppMethodInitialized_0753e4b7 = true;
								__this_03 = (Quaternion*)ppUVar12;
							}
							pUVar6 = typeof(Vector3).static_fields;
							uVar2 = (pUVar6.oneVector).x;
							uVar4 = (pUVar6.oneVector).y;
							fVar15 = (pUVar6.oneVector).z * fVar13;
							pUVar5 = CustomDebug._instance;
							if (Il2CppMethodInitialized_0753e72b == false) {
								__this_03 = &typeof(Quaternion);
								Il2CppMethodInitialized_0753e72b = true;
							}
							if (pUVar5 != null) {
								fVar14 = fVar14 * 0.5 + fVar13;
								UVar19.z = UVar17.z + fVar14 * fVar16;
								fStack_98 = UVar17.x;
								fStack_94 = UVar17.y;
								UVar19.x = fStack_98 + fVar14 * fVar1;
								UVar19.y = fStack_94 + fVar14 * fVar3;
								UVar20.x = fVar13 * (float)uVar2 + fVar13 * (float)uVar2;
								UVar20.y = fVar13 * (float)uVar4 + fVar13 * (float)uVar4;
								UVar20.z = fVar15 + fVar15;
								__this_01 = __this_03.SpawnPrimitiveObject(0, UVar19, (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields, UVar20, color);
								pUVar5 = CustomDebug._instance;
								if (Il2CppMethodInitialized_0753e72b == false) {
									__this_03 = &typeof(Quaternion);
									Il2CppMethodInitialized_0753e72b = true;
								}
								if ((((pUVar5 != null) &&(position.x = fStack_98 - fVar14 * fVar1, position.y = fStack_94 - fVar14 * fVar3, position.z = UVar17.z - fVar14 * fVar16, UVar17.y = UVar20.y, UVar17.x = UVar20.x, UVar17.z = UVar20.z, __this_02 = __this_03.SpawnPrimitiveObject(0, position, (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields, UVar17, color), __this_01 != null)) &&(pUVar9 = __this_01.transform, __this_00 != null)) &&((pUVar10 = __this_00.transform, pUVar9 != null &&(pUVar9.parent = pUVar10, __this_02 != null)))) {
									pUVar9 = __this_02.transform;
									pUVar10 = __this_00.transform;
									if (pUVar9 != null) {
										pUVar9.parent = pUVar10;
										__this_00.name = name;
										pUVar5 = CustomDebug._instance;
										if ((pUVar5 != null) &&(__this = (Dictionary<object, object>)pUVar5._debugObjects, __this != null)) {
											__this.Add((object)name, (object)__this_00);
											return name;
										}
									}
								}
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return null;
	}

	[Token(Token = "0x60055C0")]
	[Address(RVA = "0x5CDD8D0", Offset = "0x5CDC8D0", VA = "0x5CDD8D0")]
	public static void DrawRay(Vector3 origin, Vector3 direction, Color color, float duration = 1f)
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$DrawRay): 3 lines keep C-only constructs
		CustomDebug pUVar1;
		bool bVar2;
		CustomDebug.d__17<DrawLineCoroutine> __this;
		ulong uStack_58;
		float fStack_48;
		float fStack_44;
		float fStack_38;
		float fStack_34;

		pUVar1 = CustomDebug._instance;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = CustomDebug._instance;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			uStack_58._0_4_ = direction.x;
			uStack_58._4_4_ = direction.y;
			fStack_48 = origin.x;
			fStack_44 = origin.y;
			__this = new CustomDebug.d__17<DrawLineCoroutine>();
			__this.__1__state = 0;
			__this.start.x = origin.x;
			__this.start.y = origin.y;
			__this.start.z = origin.z;
			__this.end.x = (float)uStack_58 + fStack_48;
			__this.end.y = uStack_58._4_4_ + fStack_44;
			__this.end.z = direction.z + origin.z;
			fStack_38 = color.r;
			fStack_34 = color.g;
			__this.color.r = fStack_38;
			__this.color.g = fStack_34;
			__this.color.b = color.b;
			__this.color.a = color.a;
			__this.duration = duration;
			pUVar1.StartCoroutine((IEnumerator)__this);
			return;
		}
		return;
	}

	[Token(Token = "0x60055C1")]
	[Address(RVA = "0x5CDDB00", Offset = "0x5CDCB00", VA = "0x5CDDB00")]
	public static void DrawLine(Vector3 start, Vector3 end, Color color, float duration = 1f)
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$DrawLine): clean
		CustomDebug pUVar1;
		bool bVar2;
		CustomDebug.d__17<DrawLineCoroutine> __this;
		float fStack_38;
		float fStack_34;

		pUVar1 = CustomDebug._instance;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = CustomDebug._instance;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			__this = new CustomDebug.d__17<DrawLineCoroutine>();
			__this.__1__state = 0;
			__this.start.x = start.x;
			__this.start.y = start.y;
			__this.start.z = start.z;
			__this.end.x = end.x;
			__this.end.y = end.y;
			__this.end.z = end.z;
			fStack_38 = color.r;
			fStack_34 = color.g;
			__this.color.r = fStack_38;
			__this.color.g = fStack_34;
			__this.color.b = color.b;
			__this.color.a = color.a;
			__this.duration = duration;
			pUVar1.StartCoroutine((IEnumerator)__this);
			return;
		}
		return;
	}

	[Token(Token = "0x60055C2")]
	[Address(RVA = "0x5CDDC50", Offset = "0x5CDCC50", VA = "0x5CDDC50")]
	public static void SpawnCube(Vector3 position, Color color, float duration = 1f)
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$SpawnCube): clean
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		CustomDebug pUVar6;
		float fVar9;
		float fVar10;
		bool bVar11;
		CustomDebug.d__18<SpawnPrimitiveCoroutine> __this;
		float fStack_38;
		float fStack_34;

		pUVar6 = CustomDebug._instance;
		bVar11 = ((Object)pUVar6 != null);
		if (bVar11) {
			pUVar6 = CustomDebug._instance;
			uVar2 = (Quaternion.identityQuaternion).x;
			uVar4 = (Quaternion.identityQuaternion).y;
			uVar3 = (Quaternion.identityQuaternion).z;
			uVar5 = (Quaternion.identityQuaternion).w;
			if (pUVar6 == null) {
				throw new NullReferenceException();
			}
			fVar9 = (Vector3.oneVector).x;
			fVar10 = (Vector3.oneVector).y;
			fVar1 = (Vector3.oneVector).z;
			__this = new CustomDebug.d__18<SpawnPrimitiveCoroutine>();
			__this.__1__state = 0;
			__this.__4__this = pUVar6;
			__this.type = 3;
			__this.position.x = position.x;
			__this.position.y = position.y;
			__this.position.z = position.z;
			__this.Rotation.x = (float)uVar2;
			__this.Rotation.y = (float)uVar4;
			__this.Rotation.z = (float)uVar3;
			__this.Rotation.w = (float)uVar5;
			__this.size.x = fVar9;
			__this.size.y = fVar10;
			__this.size.z = fVar1;
			fStack_38 = color.r;
			fStack_34 = color.g;
			__this.color.r = fStack_38;
			__this.color.g = fStack_34;
			__this.color.b = color.b;
			__this.color.a = color.a;
			__this.duration = duration;
			pUVar6.StartCoroutine((IEnumerator)__this);
			return;
		}
		return;
	}

	[Token(Token = "0x60055C3")]
	[Address(RVA = "0x5CDDF30", Offset = "0x5CDCF30", VA = "0x5CDDF30")]
	public static void SpawnSphere(Vector3 position, float radius, Color color, float duration = 1f)
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$SpawnSphere): clean
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		CustomDebug pUVar5;
		bool bVar7;
		CustomDebug.d__18<SpawnPrimitiveCoroutine> __this;
		float fStack_38;
		float fStack_34;

		pUVar5 = CustomDebug._instance;
		bVar7 = ((Object)pUVar5 != null);
		if (bVar7) {
			pUVar5 = CustomDebug._instance;
			if (pUVar5 == null) {
				throw new NullReferenceException();
			}
			uVar1 = (Quaternion.identityQuaternion).x;
			uVar3 = (Quaternion.identityQuaternion).y;
			uVar2 = (Quaternion.identityQuaternion).z;
			uVar4 = (Quaternion.identityQuaternion).w;
			__this = new CustomDebug.d__18<SpawnPrimitiveCoroutine>();
			__this.__1__state = 0;
			__this.__4__this = pUVar5;
			__this.type = 0;
			__this.position.x = position.x;
			__this.position.y = position.y;
			__this.position.z = position.z;
			__this.Rotation.x = (float)uVar1;
			__this.Rotation.y = (float)uVar3;
			__this.Rotation.z = (float)uVar2;
			__this.Rotation.w = (float)uVar4;
			__this.size.x = radius;
			__this.size.y = radius;
			__this.size.z = radius;
			fStack_38 = color.r;
			fStack_34 = color.g;
			__this.color.r = fStack_38;
			__this.color.g = fStack_34;
			__this.color.b = color.b;
			__this.color.a = color.a;
			__this.duration = duration;
			pUVar5.StartCoroutine((IEnumerator)__this);
			return;
		}
		return;
	}

	[Token(Token = "0x60055C4")]
	[Address(RVA = "0x5CDE100", Offset = "0x5CDD100", VA = "0x5CDE100")]
	public static void SpawnCylinder(Vector3 position, float radius, float height, Color color, float duration = 1f)
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$SpawnCylinder): clean
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		CustomDebug pUVar5;
		bool bVar7;
		CustomDebug.d__18<SpawnPrimitiveCoroutine> __this;
		float fStack_38;
		float fStack_34;

		pUVar5 = CustomDebug._instance;
		bVar7 = ((Object)pUVar5 != null);
		if (bVar7) {
			pUVar5 = CustomDebug._instance;
			if (pUVar5 == null) {
				throw new NullReferenceException();
			}
			uVar1 = (Quaternion.identityQuaternion).x;
			uVar3 = (Quaternion.identityQuaternion).y;
			uVar2 = (Quaternion.identityQuaternion).z;
			uVar4 = (Quaternion.identityQuaternion).w;
			__this = new CustomDebug.d__18<SpawnPrimitiveCoroutine>();
			__this.__1__state = 0;
			__this.__4__this = pUVar5;
			__this.type = 2;
			__this.position.x = position.x;
			__this.position.y = position.y;
			__this.position.z = position.z;
			__this.Rotation.x = (float)uVar1;
			__this.Rotation.y = (float)uVar3;
			__this.Rotation.z = (float)uVar2;
			__this.Rotation.w = (float)uVar4;
			__this.size.x = radius;
			__this.size.y = height;
			__this.size.z = radius;
			fStack_38 = color.r;
			fStack_34 = color.g;
			__this.color.r = fStack_38;
			__this.color.g = fStack_34;
			__this.color.b = color.b;
			__this.color.a = color.a;
			__this.duration = duration;
			pUVar5.StartCoroutine((IEnumerator)__this);
			return;
		}
		return;
	}

	[Token(Token = "0x60055C5")]
	[Address(RVA = "0x5CDE2D0", Offset = "0x5CDD2D0", VA = "0x5CDE2D0")]
	public static void SpawnCapsule(Vector3 position, float radius, float height, Color color, float duration = 1f)
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$SpawnCapsule): clean
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		CustomDebug pUVar5;
		bool bVar7;
		CustomDebug.d__18<SpawnPrimitiveCoroutine> __this;
		float fStack_38;
		float fStack_34;

		pUVar5 = CustomDebug._instance;
		bVar7 = ((Object)pUVar5 != null);
		if (bVar7) {
			pUVar5 = CustomDebug._instance;
			if (pUVar5 == null) {
				throw new NullReferenceException();
			}
			uVar1 = (Quaternion.identityQuaternion).x;
			uVar3 = (Quaternion.identityQuaternion).y;
			uVar2 = (Quaternion.identityQuaternion).z;
			uVar4 = (Quaternion.identityQuaternion).w;
			__this = new CustomDebug.d__18<SpawnPrimitiveCoroutine>();
			__this.__1__state = 0;
			__this.__4__this = pUVar5;
			__this.type = 1;
			__this.position.x = position.x;
			__this.position.y = position.y;
			__this.position.z = position.z;
			__this.Rotation.x = (float)uVar1;
			__this.Rotation.y = (float)uVar3;
			__this.Rotation.z = (float)uVar2;
			__this.Rotation.w = (float)uVar4;
			__this.size.x = radius;
			__this.size.y = height;
			__this.size.z = radius;
			fStack_38 = color.r;
			fStack_34 = color.g;
			__this.color.r = fStack_38;
			__this.color.g = fStack_34;
			__this.color.b = color.b;
			__this.color.a = color.a;
			__this.duration = duration;
			pUVar5.StartCoroutine((IEnumerator)__this);
			return;
		}
		return;
	}

	[Token(Token = "0x60055C6")]
	[Address(RVA = "0x5CDDA40", Offset = "0x5CDCA40", VA = "0x5CDDA40")]
	[IteratorStateMachine(typeof(_003CDrawLineCoroutine_003Ed__17))]
	private IEnumerator DrawLineCoroutine(Vector3 start, Vector3 end, Color color, float duration)
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$DrawLineCoroutine): clean
		CustomDebug.d__17<DrawLineCoroutine> __this_00;
		float local_28;
		float fStack_24;

		__this_00 = new CustomDebug.d__17<DrawLineCoroutine>();
		__this_00.__1__state = 0;
		__this_00.start.x = start.x;
		__this_00.start.y = start.y;
		__this_00.start.z = start.z;
		__this_00.end.x = end.x;
		__this_00.end.y = end.y;
		__this_00.end.z = end.z;
		local_28 = color.r;
		fStack_24 = color.g;
		__this_00.color.r = local_28;
		__this_00.color.g = fStack_24;
		__this_00.color.b = color.b;
		__this_00.color.a = color.a;
		__this_00.duration = duration;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60055C7")]
	[Address(RVA = "0x5CDDE40", Offset = "0x5CDCE40", VA = "0x5CDDE40")]
	[IteratorStateMachine(typeof(_003CSpawnPrimitiveCoroutine_003Ed__18))]
	private IEnumerator SpawnPrimitiveCoroutine(PrimitiveType type, Vector3 position, Quaternion Rotation, Vector3 size, Color color, float duration)
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$SpawnPrimitiveCoroutine): clean
		CustomDebug.d__18<SpawnPrimitiveCoroutine> __this_00;
		float fStack_68;
		float fStack_64;
		float fStack_38;
		float fStack_34;

		__this_00 = new CustomDebug.d__18<SpawnPrimitiveCoroutine>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.type = type;
		__this_00.position.x = position.x;
		__this_00.position.y = position.y;
		__this_00.position.z = position.z;
		fStack_68 = Rotation.x;
		fStack_64 = Rotation.y;
		__this_00.Rotation.x = fStack_68;
		__this_00.Rotation.y = fStack_64;
		__this_00.Rotation.z = Rotation.z;
		__this_00.Rotation.w = Rotation.w;
		__this_00.size.x = size.x;
		__this_00.size.y = size.y;
		__this_00.size.z = size.z;
		fStack_38 = color.r;
		fStack_34 = color.g;
		__this_00.color.r = fStack_38;
		__this_00.color.g = fStack_34;
		__this_00.color.b = color.b;
		__this_00.color.a = color.a;
		__this_00.duration = duration;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60055C8")]
	[Address(RVA = "0x5CDC930", Offset = "0x5CDB930", VA = "0x5CDC930")]
	private GameObject DrawLineObject(Vector3 start, Vector3 end, Color color, float duration)
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$DrawLineObject): clean
		Object obj;
		LineRenderer __this_00;
		Shader shader;
		Material __this_01;

		obj = new GameObject("DebugLine");
		if (obj != null) {
			__this_00 = obj.AddComponent<LineRenderer>();
			if (__this_00 != null) {
				__this_00.positionCount = 2;
				__this_00.SetPosition(0, start);
				__this_00.SetPosition(1, end);
				shader = Shader.Find("Sprites/Default");
				__this_01 = new Material(shader);
				__this_00.material = __this_01;
				__this_00.endColor = color;
				__this_00.startColor = color;
				__this_00.endWidth = 0.05;
				__this_00.startWidth = 0.05;
				Object.Destroy(obj, duration);
				return (GameObject)obj;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60055C9")]
	[Address(RVA = "0x5CDCDA0", Offset = "0x5CDBDA0", VA = "0x5CDCDA0")]
	private GameObject SpawnPrimitiveObject(PrimitiveType type, Vector3 position, Quaternion Rotation, Vector3 size, Color color)
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$SpawnPrimitiveObject): clean
		bool bVar1;
		Object __this_00;
		Transform pUVar2;
		Object pUVar3;
		Shader shader;
		Material pUVar4;

		__this_00 = (Object)GameObject.CreatePrimitive(type);
		if (__this_00 != null) {
			__this_00.name = "DebugPrimitive";
			pUVar2 = __this_00.transform;
			if (pUVar2 != null) {
				pUVar2.position = position;
				pUVar2 = __this_00.transform;
				if (pUVar2 != null) {
					pUVar2.rotation = Rotation;
					pUVar2 = __this_00.transform;
					if (pUVar2 != null) {
						pUVar2.localScale = size;
						pUVar3 = (Object)__this_00.GetComponent<Renderer>();
						bVar1 = (pUVar3 != null);
						if (bVar1) {
							shader = Shader.Find("Universal Render Pipeline/Lit");
							pUVar4 = new Material(shader);
							if (pUVar3 == null) goto label_05ddcfd4;
							pUVar3.material = pUVar4;
							pUVar4 = pUVar3.material;
							if (pUVar4 == null) goto label_05ddcfd4;
							pUVar4.color = color;
						}
						pUVar3 = (Object)__this_00.GetComponent<Collider>();
						bVar1 = (pUVar3 != null);
						if (bVar1) {
							if (pUVar3 == null) goto label_05ddcfd4;
							pUVar3.enabled = false;
						}
						return (GameObject)__this_00;
					}
				}
			}
		}
	label_05ddcfd4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60055CA")]
	[Address(RVA = "0x5CDE4E0", Offset = "0x5CDD4E0", VA = "0x5CDE4E0")]
	public CustomDebug()
	{
		// Lifted from source/cpp/Utility/CustomDebug.c (Utility.CustomDebug$$.ctor): clean
		Dictionary<string, GameObject> __this_00;

		__this_00 = new Dictionary<string, GameObject>();
		this._debugObjects = __this_00;
		base();
		return;
	}
}
