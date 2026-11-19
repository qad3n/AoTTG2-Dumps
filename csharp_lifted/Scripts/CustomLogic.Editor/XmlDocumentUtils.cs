// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.Editor.XmlDocumentUtils
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/Editor/XmlDocumentUtils.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using System.Xml;
using Il2CppDummyDll;

namespace CustomLogic.Editor;

[Token(Token = "0x2000666")]
public static class XmlDocumentUtils
{
	[Token(Token = "0x200066A")]
	[CompilerGenerated]
	private sealed class _003CGetConstructorParamTexts_003Ed__10 : IEnumerable<KeyValuePair<string, string>>, IEnumerable, IEnumerator<KeyValuePair<string, string>>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C56")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C57")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private KeyValuePair<string, string> _003C_003E2__current;

		[Token(Token = "0x4001C58")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4001C59")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConstructorInfo ctorInfo;

		[Token(Token = "0x4001C5A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public ConstructorInfo _003C_003E3__ctorInfo;

		[Token(Token = "0x4001C5B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private Type type;

		[Token(Token = "0x4001C5C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public Type _003C_003E3__type;

		[Token(Token = "0x4001C5D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private XmlDocument xmlDocument;

		[Token(Token = "0x4001C5E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public XmlDocument _003C_003E3__xmlDocument;

		[Token(Token = "0x4001C5F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private IEnumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000AB4")]
		private KeyValuePair<string, string> System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EString_003E_003E_002ECurrent
		{
			[Token(Token = "0x6003DA8")]
			[Address(RVA = "0x5A96280", Offset = "0x5A95280", VA = "0x5A96280", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<GetConstructorParamTexts>d__10$$System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.String>>.get_Current): clean
				return (KeyValuePair<string, string>)this.__2__current;
			}
		}

		[Token(Token = "0x17000AB5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003DAA")]
			[Address(RVA = "0x5A962D0", Offset = "0x5A952D0", VA = "0x5A962D0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<GetConstructorParamTexts>d__10$$System.Collections.IEnumerator.get_Current): clean
				object pIVar1;
				String local_18;

				local_18 = this.__2__current.key;
				pIVar1 = (object)local_18 ;
				return pIVar1;
			}
		}

		[Token(Token = "0x6003DA4")]
		[Address(RVA = "0x5A94EE0", Offset = "0x5A93EE0", VA = "0x5A94EE0")]
		[DebuggerHidden]
		public _003CGetConstructorParamTexts_003Ed__10(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<GetConstructorParamTexts>d__10$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x6003DA5")]
		[Address(RVA = "0x5A95A40", Offset = "0x5A94A40", VA = "0x5A95A40", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<GetConstructorParamTexts>d__10$$System.IDisposable.Dispose): clean
			int iVar1;
			object obj;

			iVar1 = this.__1__state;
			if ((iVar1 == 1) || (iVar1 == -3)) {
				this.__1__state = -1;
				obj = ((object)this.__7__wrap1 as IDisposable);
				if (obj != null) {
					obj.Dispose();
					return;
				}
			}
			return;
		}

		[Token(Token = "0x6003DA6")]
		[Address(RVA = "0x5A95B10", Offset = "0x5A94B10", VA = "0x5A95B10", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<GetConstructorParamTexts>d__10$$MoveNext): 14 lines keep C-only constructs
			byte bVar1;
			int iVar2;
			ConstructorInfo pSVar3;
			Type pSVar4;
			XmlDocument __this_00;
			Il2CppClass pIVar5;
			XmlDocumentUtils.d__10<GetConstructorParamTexts> pCVar7;
			bool bVar8;
			System_Collections_Generic_IEnumerable_TSource__o source;
			CustomLogic_Editor_XmlDocumentUtils___c_StaticFields pCVar9;
			Func<ParameterInfo, string> __this_01;
			System_Collections_Generic_IEnumerable_TResult__o source_00;
			String[] value;
			String pSVar10;
			String str0;
			XmlNode __this_02;
			XmlNodeList pSVar11;
			IEnumerator pSVar12;
			object pIVar14;
			XmlAttributeCollection __this_03;
			XmlAttribute pSVar15;
			XmlDocumentUtils.d__10<GetConstructorParamTexts> local_50;
			XmlDocumentUtils.d__10<GetConstructorParamTexts>* local_40;
			KeyValuePair<object, object> local_38;

			local_50 = this;
			if (Il2CppMethodInitialized_0754742d == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_ParameterInfo_string) ;
				Il2CppMethodInitialized_0754742d = true;
			}
			local_40 = &local_50;
			iVar2 = this.__1__state;
			if (iVar2 == 1) {
		label_05b95e1d: ;
				this.__1__state = -3;
				pIVar14 = (object)this.__7__wrap1;
				if (pIVar14 == null) {
					throw new NullReferenceException();
				}
				pIVar5 = pIVar14.klass;
				bVar8 = pIVar14.Dispose();
				pCVar7 = local_50;
				if (bVar8) {
					pIVar14 = (object)local_50.__7__wrap1;
					if (pIVar14 == null) {
						throw new NullReferenceException();
					}
					pIVar5 = pIVar14.klass;
					pIVar14 = pIVar14.Dispose();
					if (pIVar14 == null) {
						throw new NullReferenceException();
					}
					pIVar5 = pIVar14.klass;
					bVar1 = (typeof(XmlNode)._2).typeHierarchyDepth;
					if (((pIVar5._2).typeHierarchyDepth < bVar1) ||((pIVar5._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(XmlNode))) {
						throw new InvalidCastException();
					}
					__this_03 = (XmlAttributeCollection)(*pIVar5.vtable[0x10].methodPtr)(pIVar14,pIVar5.vtable[0x10].method);
					if (__this_03 == null) {
						throw new NullReferenceException();
					}
					pSVar15 = __this_03.get_ItemOf("name");
					if (pSVar15 == null) {
						throw new NullReferenceException();
					}
					pSVar10 = pSVar15.get_Value();
					pIVar14 = (object)(*pIVar14.klass.vtable[0x29].methodPtr)(pIVar14,pIVar14.klass.vtable[0x29].method);
					local_38.key = null;
					local_38.value = null;
					local_38 = new KeyValuePair<object, object>((object)pSVar10, pIVar14);
					local_50.__2__current.key = (String)local_38.key;
					local_50.__2__current.value = (String)local_38.value;
					local_50.__1__state = 1;
					bVar8 = true;
				}
				else {
					pCVar7.__1__state = -1;
					pIVar14 = ((object)pCVar7.__7__wrap1 as IDisposable);
					if (pIVar14 != null) {
						pIVar5 = pIVar14.klass;
						pIVar14.Dispose();
					}
					local_50.__7__wrap1 = null;
					bVar8 = false;
				}
			}
			else {
				if (iVar2 == 0) {
					this.__1__state = -1;
					pSVar3 = this.ctorInfo;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					source = (System_Collections_Generic_IEnumerable_TSource__o)pSVar3.unknown();
					if ((typeof(XmlDocumentUtils.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar9 = typeof(XmlDocumentUtils.c).static_fields;
						__this_01 = pCVar9.__9__10_0;
					}
					else {
						pCVar9 = typeof(XmlDocumentUtils.c).static_fields;
						__this_01 = pCVar9.__9__10_0;
					}
					if (__this_01 == null) {
						if (((typeof(XmlDocumentUtils.c))._2).cctor_finished_or_no_cctor == 0) {
							pCVar9 = typeof(XmlDocumentUtils.c).static_fields;
						}
						pIVar14 = (object)pCVar9.__9;
						__this_01 = new Func<ParameterInfo, string>(pIVar14, (intptr_t)MethodInfo_CustomLogic_Editor_XmlDocumentUtils_c_GetConstructorParamTexts_b__10_0);
						pCVar9 = typeof(XmlDocumentUtils.c).static_fields;
						pCVar9.__9__10_0 = __this_01;
					}
					source_00 = Enumerable.Select<ParameterInfo, string>(source, (System_Func_TSource__TResult__o)__this_01);
					value = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
					if (value == null) {
						throw new NullReferenceException();
					}
					if (value.Length == 0) {
						pSVar10 = (String)**(ulong*)(g_data_07556758 + 0xb8);
						pSVar4 = local_50.type;
					}
					else {
						pSVar10 = String.Join(",", value);
						pSVar10 = String.Concat("(", pSVar10, ")");
						pSVar4 = local_50.type;
					}
					if (pSVar4 == null) {
						throw new NullReferenceException();
					}
					str0 = (String)pSVar4.unknown();
					pSVar10 = String.Concat(str0, ".#ctor", pSVar10);
					__this_00 = local_50.xmlDocument;
					pSVar10 = String.Concat("//member[@name=\"M:", pSVar10, "\"]");
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					__this_02 = __this_00.SelectSingleNode(pSVar10);
					if (__this_02 != null) {
						pSVar11 = __this_02.SelectNodes("param");
						if (pSVar11 == null) {
							throw new NullReferenceException();
						}
						pSVar12 = pSVar11.GetEnumerator();
						local_50.__7__wrap1 = pSVar12;
						this = local_50;
						goto label_05b95e1d;
					}
				}
				bVar8 = false;
			}
			return bVar8;
		}

		[Token(Token = "0x6003DA7")]
		[Address(RVA = "0x5A961C0", Offset = "0x5A951C0", VA = "0x5A961C0")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<GetConstructorParamTexts>d__10$$<>m__Finally1): clean
			object obj;

			this.__1__state = -1;
			obj = ((object)this.__7__wrap1 as IDisposable);
			if (obj == null) {
				return;
			}
			obj.Dispose();
			return;
		}

		[Token(Token = "0x6003DA9")]
		[Address(RVA = "0x5A96290", Offset = "0x5A95290", VA = "0x5A96290", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<GetConstructorParamTexts>d__10$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomLogic_Editor_XmlDocumentUtils_GetConstructorParamTexts_d__10_System_Collections_IEnumerato);
			throw (object)__this_00;
		}

		[Token(Token = "0x6003DAB")]
		[Address(RVA = "0x5A96320", Offset = "0x5A95320", VA = "0x5A96320", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<KeyValuePair<string, string>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EString_003E_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<GetConstructorParamTexts>d__10$$System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.String>>.GetEnumerator): 1 lines keep C-only constructs
			int iVar1;
			int iVar2;
			XmlDocumentUtils.d__10<GetConstructorParamTexts> __this_00;

			if (this.__1__state == -2) {
				iVar1 = this.__l__initialThreadId;
				iVar2 = Environment.CurrentManagedThreadId;
				if (iVar1 == iVar2) {
					this.__1__state = 0;
					__this_00 = this;
					goto label_05b96393;
				}
			}
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(XmlDocumentUtils.d__10<GetConstructorParamTexts>));
			__this_00 = new Object();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
		label_05b96393: ;
			__this_00.xmlDocument = this.__3__xmlDocument;
			__this_00.type = this.__3__type;
			__this_00.ctorInfo = this.__3__ctorInfo;
			return (IEnumerator)__this_00;
		}

		[Token(Token = "0x6003DAC")]
		[Address(RVA = "0x5A963E0", Offset = "0x5A953E0", VA = "0x5A963E0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<GetConstructorParamTexts>d__10$$System.Collections.IEnumerable.GetEnumerator): clean
			IEnumerator pSVar1;

			pSVar1 = this.System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.String>>.GetEnumerator();
			return pSVar1;
		}
	}

	[Token(Token = "0x200066B")]
	[CompilerGenerated]
	private sealed class _003CGetMethodParamTexts_003Ed__9 : IEnumerable<KeyValuePair<string, string>>, IEnumerable, IEnumerator<KeyValuePair<string, string>>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C60")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C61")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private KeyValuePair<string, string> _003C_003E2__current;

		[Token(Token = "0x4001C62")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4001C63")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private MethodInfo methodInfo;

		[Token(Token = "0x4001C64")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public MethodInfo _003C_003E3__methodInfo;

		[Token(Token = "0x4001C65")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private Type type;

		[Token(Token = "0x4001C66")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public Type _003C_003E3__type;

		[Token(Token = "0x4001C67")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private XmlDocument xmlDocument;

		[Token(Token = "0x4001C68")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public XmlDocument _003C_003E3__xmlDocument;

		[Token(Token = "0x4001C69")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private IEnumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000AB6")]
		private KeyValuePair<string, string> System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EString_003E_003E_002ECurrent
		{
			[Token(Token = "0x6003DB1")]
			[Address(RVA = "0x5A96C60", Offset = "0x5A95C60", VA = "0x5A96C60", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<GetMethodParamTexts>d__9$$System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.String>>.get_Current): clean
				return (KeyValuePair<string, string>)this.__2__current;
			}
		}

		[Token(Token = "0x17000AB7")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003DB3")]
			[Address(RVA = "0x5A96CB0", Offset = "0x5A95CB0", VA = "0x5A96CB0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<GetMethodParamTexts>d__9$$System.Collections.IEnumerator.get_Current): clean
				object pIVar1;
				String local_18;

				local_18 = this.__2__current.key;
				pIVar1 = (object)local_18 ;
				return pIVar1;
			}
		}

		[Token(Token = "0x6003DAD")]
		[Address(RVA = "0x5A94E10", Offset = "0x5A93E10", VA = "0x5A94E10")]
		[DebuggerHidden]
		public _003CGetMethodParamTexts_003Ed__9(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<GetMethodParamTexts>d__9$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x6003DAE")]
		[Address(RVA = "0x5A963F0", Offset = "0x5A953F0", VA = "0x5A963F0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<GetMethodParamTexts>d__9$$System.IDisposable.Dispose): clean
			int iVar1;
			object obj;

			iVar1 = this.__1__state;
			if ((iVar1 == 1) || (iVar1 == -3)) {
				this.__1__state = -1;
				obj = ((object)this.__7__wrap1 as IDisposable);
				if (obj != null) {
					obj.Dispose();
					return;
				}
			}
			return;
		}

		[Token(Token = "0x6003DAF")]
		[Address(RVA = "0x5A964C0", Offset = "0x5A954C0", VA = "0x5A964C0", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<GetMethodParamTexts>d__9$$MoveNext): 14 lines keep C-only constructs
			byte bVar1;
			int iVar2;
			MethodInfo pSVar3;
			Type pSVar4;
			XmlDocument __this_00;
			Il2CppClass pIVar5;
			XmlDocumentUtils.d__9<GetMethodParamTexts> pCVar7;
			bool bVar8;
			System_Collections_Generic_IEnumerable_TSource__o source;
			CustomLogic_Editor_XmlDocumentUtils___c_StaticFields pCVar9;
			Func<ParameterInfo, string> __this_01;
			System_Collections_Generic_IEnumerable_TResult__o source_00;
			String[] value;
			String pSVar10;
			String str0;
			String str2;
			XmlNode __this_02;
			XmlNodeList pSVar11;
			IEnumerator pSVar12;
			object pIVar14;
			XmlAttributeCollection __this_03;
			XmlAttribute pSVar15;
			XmlDocumentUtils.d__9<GetMethodParamTexts> local_50;
			XmlDocumentUtils.d__9<GetMethodParamTexts>* local_40;
			KeyValuePair<object, object> local_38;

			local_50 = this;
			if (Il2CppMethodInitialized_07547431 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_ParameterInfo_string) ;
				Il2CppMethodInitialized_07547431 = true;
			}
			local_40 = &local_50;
			iVar2 = this.__1__state;
			if (iVar2 == 1) {
		label_05b967f6: ;
				this.__1__state = -3;
				pIVar14 = (object)this.__7__wrap1;
				if (pIVar14 == null) {
					throw new NullReferenceException();
				}
				pIVar5 = pIVar14.klass;
				bVar8 = pIVar14.Dispose();
				pCVar7 = local_50;
				if (bVar8) {
					pIVar14 = (object)local_50.__7__wrap1;
					if (pIVar14 == null) {
						throw new NullReferenceException();
					}
					pIVar5 = pIVar14.klass;
					pIVar14 = pIVar14.Dispose();
					if (pIVar14 == null) {
						throw new NullReferenceException();
					}
					pIVar5 = pIVar14.klass;
					bVar1 = (typeof(XmlNode)._2).typeHierarchyDepth;
					if (((pIVar5._2).typeHierarchyDepth < bVar1) ||((pIVar5._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(XmlNode))) {
						throw new InvalidCastException();
					}
					__this_03 = (XmlAttributeCollection)(*pIVar5.vtable[0x10].methodPtr)(pIVar14,pIVar5.vtable[0x10].method);
					if (__this_03 == null) {
						throw new NullReferenceException();
					}
					pSVar15 = __this_03.get_ItemOf("name");
					if (pSVar15 == null) {
						throw new NullReferenceException();
					}
					pSVar10 = pSVar15.get_Value();
					pIVar14 = (object)(*pIVar14.klass.vtable[0x29].methodPtr)(pIVar14,pIVar14.klass.vtable[0x29].method);
					local_38.key = null;
					local_38.value = null;
					local_38 = new KeyValuePair<object, object>((object)pSVar10, pIVar14);
					local_50.__2__current.key = (String)local_38.key;
					local_50.__2__current.value = (String)local_38.value;
					local_50.__1__state = 1;
					bVar8 = true;
				}
				else {
					pCVar7.__1__state = -1;
					pIVar14 = ((object)pCVar7.__7__wrap1 as IDisposable);
					if (pIVar14 != null) {
						pIVar5 = pIVar14.klass;
						pIVar14.Dispose();
					}
					local_50.__7__wrap1 = null;
					bVar8 = false;
				}
			}
			else {
				if (iVar2 == 0) {
					this.__1__state = -1;
					pSVar3 = this.methodInfo;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					source = (System_Collections_Generic_IEnumerable_TSource__o)pSVar3.unknown();
					if ((typeof(XmlDocumentUtils.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar9 = typeof(XmlDocumentUtils.c).static_fields;
						__this_01 = pCVar9.__9__9_0;
					}
					else {
						pCVar9 = typeof(XmlDocumentUtils.c).static_fields;
						__this_01 = pCVar9.__9__9_0;
					}
					if (__this_01 == null) {
						if (((typeof(XmlDocumentUtils.c))._2).cctor_finished_or_no_cctor == 0) {
							pCVar9 = typeof(XmlDocumentUtils.c).static_fields;
						}
						pIVar14 = (object)pCVar9.__9;
						__this_01 = new Func<ParameterInfo, string>(pIVar14, (intptr_t)MethodInfo_CustomLogic_Editor_XmlDocumentUtils_c_GetMethodParamTexts_b__9_0);
						pCVar9 = typeof(XmlDocumentUtils.c).static_fields;
						pCVar9.__9__9_0 = __this_01;
					}
					source_00 = Enumerable.Select<ParameterInfo, string>(source, (System_Func_TSource__TResult__o)__this_01);
					value = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
					if (value == null) {
						throw new NullReferenceException();
					}
					if (value.Length == 0) {
						pSVar10 = (String)**(ulong*)(g_data_07556758 + 0xb8);
						pSVar4 = local_50.type;
					}
					else {
						pSVar10 = String.Join(",", value);
						pSVar10 = String.Concat("(", pSVar10, ")");
						pSVar4 = local_50.type;
					}
					if (pSVar4 == null) {
						throw new NullReferenceException();
					}
					str0 = (String)pSVar4.unknown();
					pSVar3 = local_50.methodInfo;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					str2 = (String)pSVar3.unknown() ;
					pSVar10 = String.Concat(str0, ".", str2, pSVar10);
					__this_00 = local_50.xmlDocument;
					pSVar10 = String.Concat("//member[@name=\"M:", pSVar10, "\"]");
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					__this_02 = __this_00.SelectSingleNode(pSVar10);
					if (__this_02 != null) {
						pSVar11 = __this_02.SelectNodes("param");
						if (pSVar11 == null) {
							throw new NullReferenceException();
						}
						pSVar12 = pSVar11.GetEnumerator();
						local_50.__7__wrap1 = pSVar12;
						this = local_50;
						goto label_05b967f6;
					}
				}
				bVar8 = false;
			}
			return bVar8;
		}

		[Token(Token = "0x6003DB0")]
		[Address(RVA = "0x5A96BA0", Offset = "0x5A95BA0", VA = "0x5A96BA0")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<GetMethodParamTexts>d__9$$<>m__Finally1): clean
			object obj;

			this.__1__state = -1;
			obj = ((object)this.__7__wrap1 as IDisposable);
			if (obj == null) {
				return;
			}
			obj.Dispose();
			return;
		}

		[Token(Token = "0x6003DB2")]
		[Address(RVA = "0x5A96C70", Offset = "0x5A95C70", VA = "0x5A96C70", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<GetMethodParamTexts>d__9$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomLogic_Editor_XmlDocumentUtils_GetMethodParamTexts_d__9_System_Collections_IEnumerator_Rese);
			throw (object)__this_00;
		}

		[Token(Token = "0x6003DB4")]
		[Address(RVA = "0x5A96D00", Offset = "0x5A95D00", VA = "0x5A96D00", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<KeyValuePair<string, string>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EString_003E_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<GetMethodParamTexts>d__9$$System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.String>>.GetEnumerator): 1 lines keep C-only constructs
			int iVar1;
			int iVar2;
			XmlDocumentUtils.d__9<GetMethodParamTexts> __this_00;

			if (this.__1__state == -2) {
				iVar1 = this.__l__initialThreadId;
				iVar2 = Environment.CurrentManagedThreadId;
				if (iVar1 == iVar2) {
					this.__1__state = 0;
					__this_00 = this;
					goto label_05b96d73;
				}
			}
			__this_00 = il2cpp_codegen_object_new(typeof(XmlDocumentUtils.d__9<GetMethodParamTexts>)) ;
			__this_00 = new Object();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
		label_05b96d73: ;
			__this_00.xmlDocument = this.__3__xmlDocument;
			__this_00.type = this.__3__type;
			__this_00.methodInfo = this.__3__methodInfo;
			return (IEnumerator)__this_00;
		}

		[Token(Token = "0x6003DB5")]
		[Address(RVA = "0x5A96DC0", Offset = "0x5A95DC0", VA = "0x5A96DC0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<GetMethodParamTexts>d__9$$System.Collections.IEnumerable.GetEnumerator): clean
			IEnumerator pSVar1;

			pSVar1 = this.System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.String>>.GetEnumerator();
			return pSVar1;
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200066C")]
	[CompilerGenerated]
	private struct _003CResolveAndReplaceInheritDocNodeAsync_003Ed__4 : IAsyncStateMachine
	{
		[Token(Token = "0x4001C6A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001C6B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4001C6C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<string> logError;

		[Token(Token = "0x4001C6D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public XmlDocument xmlDocument;

		[Token(Token = "0x4001C6E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private IEnumerator _003C_003E7__wrap1;

		[Token(Token = "0x4001C6F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private YieldAwaitable.YieldAwaiter _003C_003Eu__1;

		[Token(Token = "0x4001C70")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private TaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6003DB6")]
		[Address(RVA = "0x5A96DD0", Offset = "0x5A95DD0", VA = "0x5A96DD0", Slot = "4")]
		private void MoveNext()
		{
			// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<ResolveAndReplaceInheritDocNodeAsync>d__4$$MoveNext): 15 lines keep C-only constructs
			Action<string>* targetAddress;
			byte bVar1;
			XmlDocument __this_00;
			Il2CppClass pIVar2;
			Il2CppRuntimeInterfaceOffsetPair pIVar3;
			Func<Task.ContingentProperties> __this_01;
			XmlDocumentUtils.d__4<ResolveAndReplaceInheritDocNodeAsync> pCVar4;
			bool bVar5;
			Action<string> pSVar6;
			XmlNodeList pSVar7;
			IEnumerator pSVar8;
			VirtualInvokeData pVVar9;
			object pIVar10;
			XmlAttributeCollection __this_02;
			XmlAttribute pSVar11;
			String pSVar12;
			XmlNode pSVar13;
			long plVar14;
			ulong uVar15;
			ulong uVar16;
			long lVar17;
			YieldAwaitable.YieldAwaiter[] local_58 = new YieldAwaitable.YieldAwaiter[8];
			YieldAwaitable[] local_50 = new YieldAwaitable[8];
			XmlDocumentUtils.d__4<ResolveAndReplaceInheritDocNodeAsync> local_48;
			int local_3c;
			TaskAwaiter local_38;

			local_48 = this;
			local_58[0] = (YieldAwaitable.YieldAwaiter)0x0;
			local_50[0]._tail[0] = (YieldAwaitable)(byte[])0x0;
			local_38.m_task =(TaskAwaiter)null;
			local_3c = local_48.__1__state;
			if (local_3c == 0) {
				local_58[0] = (YieldAwaitable.YieldAwaiter)local_48._pad_40[0] ;
				local_48._pad_40[0] = 0;
				local_48.__1__state = -1;
				local_3c = -1;
				goto label_05b97707;
			}
			if (local_3c != 1) {
				if (local_48.logError == null) {
					pSVar6 = new Action<string>(null, (intptr_t)MethodInfo_UnityEngine_Debug_LogError);
					targetAddress = &local_48.logError;
					*targetAddress = pSVar6;
				}
				__this_00 = local_48.xmlDocument;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				pSVar7 = __this_00.SelectNodes("//inheritdoc");
				if (pSVar7 == null) {
					throw new NullReferenceException();
				}
				pSVar8 = pSVar7.GetEnumerator();
				local_48.__7__wrap1 = pSVar8;
				do {
					pIVar10 = (object)local_48.__7__wrap1;
					if (pIVar10 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = pIVar10.klass;
					uVar16 = (ulong)(pIVar2._2).interface_offsets_count;
					bVar5 = pIVar10.Dispose();
					if (!bVar5) {
						if ((-1 < local_3c) ||(pIVar10 = ((object)local_48.__7__wrap1 as IDisposable), pIVar10 == null)) goto label_05b973a3;
						pIVar2 = pIVar10.klass;
						uVar16 = (ulong)(pIVar2._2).interface_offsets_count;
						if (uVar16 == 0) goto label_05b972d3;
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar17 = 0;
						goto label_05b972c0;
					}
					pIVar10 = (object)local_48.__7__wrap1;
					if (pIVar10 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = pIVar10.klass;
					uVar16 = (ulong)(pIVar2._2).interface_offsets_count;
					pIVar10 = pIVar10.Dispose();
					if (pIVar10 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = pIVar10.klass;
					bVar1 = (typeof(XmlNode)._2).typeHierarchyDepth;
					if (((pIVar2._2).typeHierarchyDepth < bVar1) ||((pIVar2._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(XmlNode))) {
						throw new InvalidCastException();
					}
					__this_02 = (XmlAttributeCollection)(*pIVar2.vtable[0x10].methodPtr)(pIVar10,pIVar2.vtable[0x10].method);
					if (__this_02 == null) {
						throw new NullReferenceException();
					}
					pSVar11 = __this_02.get_ItemOf("cref");
					if (pSVar11 == null) {
						throw new NullReferenceException();
					}
					pSVar12 = pSVar11.get_Value();
					pSVar13 = XmlDocumentUtils.ResolveInheritDoc(pSVar12);
					if (pSVar13 == null) {
						pSVar6 = local_48.logError;
						pSVar12 = String.Concat("Could not resolve cref ", pSVar12);
						if (pSVar6 == null) {
							throw new NullReferenceException();
						}
						(*(code)pSVar6.invoke_impl)(pSVar6.method_code,pSVar12,pSVar6.method);
					}
					else {
						plVar14 = (long)(*pIVar10.klass.vtable[0xc].methodPtr)(pIVar10,pIVar10.klass.vtable[0xc].method) ;
						if (plVar14 == null) {
							throw new NullReferenceException();
						}
						plVar14 = (long)(**(code*)(*plVar14 + 0x248))(plVar14,*(ulong)(*plVar14 + 0x250));
						if (plVar14 == null) {
							throw new NullReferenceException();
						}
						uVar15 = (**(code*)(*plVar14 + 0x608))(plVar14,pSVar13,1,*(ulong)(*plVar14 + 0x610));
						plVar14 = (long)(*pIVar10.klass.vtable[0xc].methodPtr)(pIVar10,pIVar10.klass.vtable[0xc].method) ;
						if (plVar14 == null) {
							throw new NullReferenceException();
						}
						(**(code*)(*plVar14 + 0x2c8))(plVar14,uVar15,pIVar10,*(ulong)(*plVar14 + 0x2d0));
						local_50[0] = Task.Yield();
						local_58[0] = (YieldAwaitable.YieldAwaiter)local_50.GetAwaiter();
						if ((typeof(YieldAwaitable.YieldAwaiter)._2). cctor_finished_or_no_cctor == 0) {
						}
						bVar5 = local_58.IsCompleted;
						if (!bVar5) {
							local_48.__1__state = 0;
							local_48._pad_40[0] = (uint8_t)local_58[0];
							(local_48.__t__builder).AwaitUnsafeOnCompleted<YieldAwaitable.YieldAwaiter, XmlDocumentUtils._ResolveAndReplaceInheritDocNodeAsync_d__4>(local_58, local_48);
							return;
						}
		label_05b97707: ;
						if ((typeof(YieldAwaitable.YieldAwaiter)._2). cctor_finished_or_no_cctor == 0) {
						}
						local_58.GetResult();
					}
				} while(true);
			}
			local_38.m_task =(TaskAwaiter)local_48.__u__2.m_task;
			local_48.__u__2.m_task = null;
			local_48.__1__state = -1;
			goto label_05b97436;
			while (true) {
				lVar17 = lVar17 + 0x10;
				if (!(uVar16 * 0x10 != lVar17)) break;
		label_05b972c0: ;
				if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar17) == typeof(IDisposable)) {
					pVVar9 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar17);
					goto label_05b9739a;
				}
			}
		label_05b972d3: ;
		label_05b9739a: ;
			pIVar10.Dispose();
		label_05b973a3: ;
			local_48.__7__wrap1 = null;
			if (Il2CppMethodInitialized_07542f8d == false) {
				Il2CppMethodInitialized_07542f8d = true;
				if ((typeof(Task)._2).cctor_finished_or_no_cctor == 0) goto label_05b974f4;
		label_05b97406: ;
				__this_01 = Task.s_createContingentProperties;
			}
			else {
				if ((typeof(Task)._2).cctor_finished_or_no_cctor != 0) goto label_05b97406;
		label_05b974f4: ;
				__this_01 = Task.s_createContingentProperties;
			}
			if (__this_01 == null) {
				throw new NullReferenceException();
			}
			local_38 = __this_01.GetAwaiter();
			bVar5 = local_38.IsCompleted;
			if (!bVar5) {
				local_48.__1__state = 1;
				local_48.__u__2.m_task = (Task)local_38.m_task;
				(local_48.__t__builder).AwaitUnsafeOnCompleted<TaskAwaiter, XmlDocumentUtils._ResolveAndReplaceInheritDocNodeAsync_d__4>(ref local_38, local_48);
				return;
			}
		label_05b97436: ;
			local_38.GetResult();
			local_48.__1__state = -2;
			pCVar4 = &local_48.fields;
			(pCVar4.__t__builder).SetResult();
			return;
		}

		[Token(Token = "0x6003DB7")]
		[Address(RVA = "0x5A978E0", Offset = "0x5A968E0", VA = "0x5A978E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils.<ResolveAndReplaceInheritDocNodeAsync>d__4$$SetStateMachine): clean
			(this.__t__builder).SetStateMachine(stateMachine);
			return;
		}
	}

	[Token(Token = "0x4001C4D")]
	public const string XmlPath = "Temp/Bin/Debug";

	[Token(Token = "0x4001C4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<string> _priorityXml;

	[Token(Token = "0x6003D8A")]
	[Address(RVA = "0x5A93FC0", Offset = "0x5A92FC0", VA = "0x5A93FC0")]
	public static XmlDocument LoadXml(string path)
	{
		// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils$$LoadXml): clean
		XmlDocument __this;

		__this = new XmlDocument();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Load(path);
		return __this;
	}

	[Token(Token = "0x6003D8B")]
	[Address(RVA = "0x5A94030", Offset = "0x5A93030", VA = "0x5A94030")]
	private static XmlNode TryResolve(string cref, string file)
	{
		// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils$$TryResolve): clean
		uint uVar1;
		XmlDocument __this;
		String xpath;
		XmlNode pSVar2;

		if (Il2CppMethodInitialized_0754741c == false) {
			Il2CppMethodInitialized_0754741c = true;
			uVar1 = (typeof(XmlDocumentUtils)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(XmlDocumentUtils)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		__this = new XmlDocument();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Load(file);
		xpath = String.Concat("//member[@name='", cref, "']");
		return pSVar2;
	}

	[Token(Token = "0x6003D8C")]
	[Address(RVA = "0x5A94150", Offset = "0x5A93150", VA = "0x5A94150")]
	[AsyncStateMachine(typeof(_003CResolveAndReplaceInheritDocNodeAsync_003Ed__4))]
	public static Task ResolveAndReplaceInheritDocNodeAsync(XmlDocument xmlDocument, [Optional] Action<string> logError)
	{
		// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils$$ResolveAndReplaceInheritDocNodeAsync): 2 lines keep C-only constructs
		AsyncTaskMethodBuilder __this;
		Task pSVar1;
		XmlDocumentUtils.d__4<ResolveAndReplaceInheritDocNodeAsync> CStack_78;
		AsyncTaskMethodBuilder SStack_30;

		CStack_78.__7__wrap1 = null;
		CStack_78._pad_40[0] = 0;
		CStack_78._pad_40[1] = 0;
		CStack_78._pad_40[2] = 0;
		CStack_78._pad_40[3] = 0;
		CStack_78._pad_40[4] = 0;
		CStack_78._pad_40[5] = 0;
		CStack_78._pad_40[6] = 0;
		CStack_78._63_1_ = 0;
		CStack_78.logError = null;
		CStack_78.xmlDocument = null;
		CStack_78.__t__builder.m_builder.m_coreState.m_defaultContextAction =null;
		CStack_78.__t__builder.m_builder.m_task = null;
		CStack_78.__1__state = 0;
		CStack_78._pad_8[0] = 0;
		CStack_78._pad_8[1] = 0;
		CStack_78._pad_8[2] = 0;
		CStack_78._pad_8[3] = 0;
		CStack_78.__t__builder.m_builder.m_coreState.m_stateMachine =null;
		CStack_78.__u__2.m_task =(TaskAwaiter)null;
		SStack_30 = AsyncTaskMethodBuilder.Create();
		__this = &CStack_78.__t__builder;
		CStack_78.__t__builder.m_builder.m_task = SStack_30.m_builder.m_task;
		CStack_78.__t__builder.m_builder.m_coreState.m_stateMachine = SStack_30.m_builder.m_coreState.m_stateMachine;
		CStack_78.__t__builder.m_builder.m_coreState.m_defaultContextAction = SStack_30.m_builder.m_coreState.m_defaultContextAction;
		CStack_78.xmlDocument = xmlDocument;
		CStack_78.logError = logError;
		CStack_78.__1__state = -1;
		__this.Start<XmlDocumentUtils._ResolveAndReplaceInheritDocNodeAsync_d__4>(ref CStack_78);
		return pSVar1;
	}

	[Token(Token = "0x6003D8D")]
	[Address(RVA = "0x5A94250", Offset = "0x5A93250", VA = "0x5A94250")]
	private static XmlNode ResolveInheritDoc(string cref)
	{
		// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils$$ResolveInheritDoc): 4 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		List<string> pSVar3;
		bool bVar4;
		String pSVar5;
		XmlNode pSVar6;
		String[] pSVar7;
		ulong uVar8;
		String item;
		ulong uVar10;
		byte[] local_68 = new byte[16];
		String local_58;
		byte[] local_48 = new byte[16];
		String local_38;

		if (Il2CppMethodInitialized_0754741e == false) {
			Il2CppMethodInitialized_0754741e = true;
			uVar1 = (typeof(XmlDocumentUtils)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(XmlDocumentUtils)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = XmlDocumentUtils._priorityXml;
		}
		else {
			pSVar3 = *(List<string>*)(typeof(XmlDocumentUtils)).static_fields;
		}
		if (pSVar3 != null) {
			local_48.GetEnumerator((List<object>)pSVar3);
			local_58 = local_38;
			local_68._0_8_ = local_48._0_8_;
			local_68._8_8_ = local_48._8_8_;
			local_48._0_8_ = null;
			local_48._8_8_ = local_68;
			while(true) {
				bVar4 = local_68.MoveNext();
				if (!bVar4) break;
				pSVar5 = String.Concat("Temp/Bin/Debug/", local_58);
				if ((typeof(XmlDocumentUtils)._2).cctor_finished_or_no_cctor == 0) {
				}
				pSVar6 = XmlDocumentUtils.TryResolve(cref, pSVar5);
				if (pSVar6 != null) {
					local_68.Dispose() ;
					return pSVar6;
				}
			}
			local_68.Dispose();
			pSVar7 = Directory.GetFiles("Temp/Bin/Debug", "UnityEngine*.xml");
			if (pSVar7 != null) {
				if (0 < (int)pSVar7.Length) {
					uVar8 = pSVar7.Length & 0xffffffff;
					uVar10 = 0;
					do {
						if (uVar8 <= uVar10) {
							throw new IndexOutOfRangeException();
						}
						pSVar5 = pSVar7[uVar10];
						pSVar3 = XmlDocumentUtils._priorityXml;
						item = Path.GetFileName(pSVar5);
						if (pSVar3 == null) goto label_05b9451f;
						bVar4 = pSVar3.Contains((object)item) ;
						if (!bVar4) {
							if ((typeof(XmlDocumentUtils)._2).cctor_finished_or_no_cctor == 0) {
							}
							pSVar6 = XmlDocumentUtils.TryResolve(cref, pSVar5);
							if (pSVar6 != null) {
								return pSVar6;
							}
						}
						uVar10 = uVar10 + 1;
						uVar2 = (uint)pSVar7.Length;
						uVar8 = (ulong)uVar2;
					} while ((long)uVar10 < (long)(int)uVar2);
				}
				return null;
			}
		}
	label_05b9451f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003D8E")]
	[Address(RVA = "0x5A94590", Offset = "0x5A93590", VA = "0x5A94590")]
	public static string GetTypeNodeText(XmlDocument xmlDocument, Type type, string nodeType, string defaultText = "")
	{
		// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils$$GetTypeNodeText): clean
		bool bVar1;
		String pSVar2;
		XmlNode node;
		String local_28;

		local_28 = null;
		if (type != null) {
			pSVar2 = (String)type.unknown();
			pSVar2 = String.Concat("T:", pSVar2);
			pSVar2 = String.Concat("//member[@name=\"", pSVar2, "\"]");
			if (xmlDocument != null) {
				node = xmlDocument.SelectSingleNode(pSVar2);
				bVar1 = XmlDocumentUtils.TryGetInnerText(node, nodeType, ref local_28);
				if (bVar1) {
				}
				return defaultText;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003D8F")]
	[Address(RVA = "0x5A94790", Offset = "0x5A93790", VA = "0x5A94790")]
	public static string GetConstructorNodeText(XmlDocument xmlDocument, Type type, ConstructorInfo ctorInfo, string nodeType, string defaultText = "")
	{
		// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils$$GetConstructorNodeText): 7 lines keep C-only constructs
		object @object;
		bool bVar1;
		System_Collections_Generic_IEnumerable_TSource__o source;
		CustomLogic_Editor_XmlDocumentUtils___c_StaticFields pCVar2;
		Func<ParameterInfo, string> __this;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		String[] value;
		String pSVar3;
		String str0;
		XmlNode node;
		String local_48;
		String local_40;
		XmlDocument local_38;

		local_38 = xmlDocument;
		if (Il2CppMethodInitialized_07547420 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_ParameterInfo_string) ;
			Il2CppMethodInitialized_07547420 = true;
		}
		local_48 = null;
		if (ctorInfo != null) {
			source = (System_Collections_Generic_IEnumerable_TSource__o)ctorInfo.unknown();
			if ((typeof(XmlDocumentUtils.c)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = typeof(XmlDocumentUtils.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = typeof(XmlDocumentUtils.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				local_40 = nodeType;
				if (((typeof(XmlDocumentUtils.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(XmlDocumentUtils.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<ParameterInfo, string>(@object, (intptr_t)MethodInfo_CustomLogic_Editor_XmlDocumentUtils_c_GetConstructorNodeText_b__7_0);
				pCVar2 = typeof(XmlDocumentUtils.c).static_fields;
				pCVar2.__9__7_0 = __this;
				nodeType = local_40;
			}
			source_00 = Enumerable.Select<ParameterInfo, string>(source, (System_Func_TSource__TResult__o)__this);
			value = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
			if (value != null) {
				if (value.Length == 0) {
					pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				else {
					pSVar3 = String.Join(",", value);
					pSVar3 = String.Concat("(", pSVar3, ")");
				}
				if (type != null) {
					str0 = (String)type.unknown();
					pSVar3 = String.Concat(str0, ".#ctor", pSVar3);
					pSVar3 = String.Concat("//member[@name=\"M:", pSVar3, "\"]");
					if (local_38 != null) {
						node = local_38.SelectSingleNode(pSVar3);
						bVar1 = XmlDocumentUtils.TryGetInnerText(node, nodeType, ref local_48);
						if (bVar1) {
						}
						return defaultText;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003D90")]
	[Address(RVA = "0x5A94A70", Offset = "0x5A93A70", VA = "0x5A94A70")]
	public static string GetMethodNodeText(XmlDocument xmlDocument, Type type, MethodInfo methodInfo, string nodeType, string defaultText = "")
	{
		// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils$$GetMethodNodeText): 7 lines keep C-only constructs
		object @object;
		bool bVar1;
		System_Collections_Generic_IEnumerable_TSource__o source;
		CustomLogic_Editor_XmlDocumentUtils___c_StaticFields pCVar2;
		Func<ParameterInfo, string> __this;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		String[] value;
		String pSVar3;
		String str0;
		String str2;
		XmlNode node;
		String local_50;
		String local_48;
		String local_40;
		XmlDocument local_38;

		local_40 = nodeType;
		local_38 = xmlDocument;
		if (Il2CppMethodInitialized_07547421 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_ParameterInfo_string) ;
			Il2CppMethodInitialized_07547421 = true;
		}
		local_50 = null;
		if (methodInfo != null) {
			source = (System_Collections_Generic_IEnumerable_TSource__o)methodInfo.unknown();
			if ((typeof(XmlDocumentUtils.c)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = typeof(XmlDocumentUtils.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = typeof(XmlDocumentUtils.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				local_48 = defaultText;
				if (((typeof(XmlDocumentUtils.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(XmlDocumentUtils.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<ParameterInfo, string>(@object, (intptr_t)MethodInfo_CustomLogic_Editor_XmlDocumentUtils_c_GetMethodNodeText_b__8_0);
				pCVar2 = typeof(XmlDocumentUtils.c).static_fields;
				pCVar2.__9__8_0 = __this;
				defaultText = local_48;
			}
			source_00 = Enumerable.Select<ParameterInfo, string>(source, (System_Func_TSource__TResult__o)__this);
			value = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
			if (value != null) {
				if (value.Length == 0) {
					pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				else {
					pSVar3 = String.Join(",", value);
					pSVar3 = String.Concat("(", pSVar3, ")");
				}
				if (type != null) {
					str0 = (String)type.unknown();
					str2 = (String)methodInfo.unknown();
					pSVar3 = String.Concat(str0, ".", str2, pSVar3);
					pSVar3 = String.Concat("//member[@name=\"M:", pSVar3, "\"]");
					if (local_38 != null) {
						node = local_38.SelectSingleNode(pSVar3);
						bVar1 = XmlDocumentUtils.TryGetInnerText(node, local_40, ref local_50);
						if (bVar1) {
							defaultText = local_50;
						}
						return defaultText;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003D91")]
	[Address(RVA = "0x5A94D70", Offset = "0x5A93D70", VA = "0x5A94D70")]
	[IteratorStateMachine(typeof(_003CGetMethodParamTexts_003Ed__9))]
	public static IEnumerable<KeyValuePair<string, string>> GetMethodParamTexts(XmlDocument xmlDocument, Type type, MethodInfo methodInfo)
	{
		// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils$$GetMethodParamTexts): clean
		int iVar1;
		XmlDocumentUtils.d__9<GetMethodParamTexts> __this;

		__this = new XmlDocumentUtils.d__9<GetMethodParamTexts>();
		__this.__1__state = -2;
		iVar1 = Environment.CurrentManagedThreadId;
		__this.__l__initialThreadId = iVar1;
		__this.__3__xmlDocument = xmlDocument;
		__this.__3__type = type;
		__this.__3__methodInfo = methodInfo;
		return (IEnumerable<KeyValuePair<string, string>>)__this;
	}

	[Token(Token = "0x6003D92")]
	[Address(RVA = "0x5A94E40", Offset = "0x5A93E40", VA = "0x5A94E40")]
	[IteratorStateMachine(typeof(_003CGetConstructorParamTexts_003Ed__10))]
	public static IEnumerable<KeyValuePair<string, string>> GetConstructorParamTexts(XmlDocument xmlDocument, Type type, ConstructorInfo ctorInfo)
	{
		// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils$$GetConstructorParamTexts): 1 lines keep C-only constructs
		int iVar1;
		XmlDocumentUtils.d__10<GetConstructorParamTexts> __this;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(XmlDocumentUtils.d__10<GetConstructorParamTexts>));
		__this = new Object();
		__this.__1__state = -2;
		iVar1 = Environment.CurrentManagedThreadId;
		__this.__l__initialThreadId = iVar1;
		__this.__3__xmlDocument = xmlDocument;
		__this.__3__type = type;
		__this.__3__ctorInfo = ctorInfo;
		return (IEnumerable<KeyValuePair<string, string>>)__this;
	}

	[Token(Token = "0x6003D93")]
	[Address(RVA = "0x5A94F10", Offset = "0x5A93F10", VA = "0x5A94F10")]
	public static string GetParameterNodeText(XmlDocument xmlDocument, Type type, MethodInfo methodInfo, ParameterInfo parameterInfo, string defaultText = "")
	{
		// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils$$GetParameterNodeText): 2 lines keep C-only constructs
		XmlDocumentUtils.c__DisplayClass11_0 __this;
		IEnumerable<KeyValuePair<string, string>> source;
		Func<T, TResult> __this_00;
		KeyValuePair<object, object> SVar1;

		__this = new XmlDocumentUtils.c__DisplayClass11_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.parameterInfo = parameterInfo;
		source = XmlDocumentUtils.GetMethodParamTexts(xmlDocument, type, methodInfo);
		__this_00 = new Func<KeyValuePair<string, string>, bool>((object)__this, (intptr_t) MethodInfo_CustomLogic_Editor_XmlDocumentUtils_c__DisplayClass11_0_GetParameterNodeText_b__0);
		SVar1 = Enumerable.FirstOrDefault<KeyValuePair<string, string>>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		if ((String)SVar1.value != null) {
		}
		return defaultText;
	}

	[Token(Token = "0x6003D94")]
	[Address(RVA = "0x5A95050", Offset = "0x5A94050", VA = "0x5A95050")]
	public static string GetParameterNodeText(XmlDocument xmlDocument, Type type, ConstructorInfo ctorInfo, ParameterInfo parameterInfo, string defaultText = "")
	{
		// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils$$GetParameterNodeText): 2 lines keep C-only constructs
		XmlDocumentUtils.c__DisplayClass12_0 __this;
		IEnumerable<KeyValuePair<string, string>> source;
		Func<T, TResult> __this_00;
		KeyValuePair<object, object> SVar1;

		__this = new XmlDocumentUtils.c__DisplayClass12_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.parameterInfo = parameterInfo;
		source = XmlDocumentUtils.GetConstructorParamTexts(xmlDocument, type, ctorInfo);
		__this_00 = new Func<KeyValuePair<string, string>, bool>((object)__this, (intptr_t) MethodInfo_CustomLogic_Editor_XmlDocumentUtils_c__DisplayClass12_0_GetParameterNodeText_b__0);
		SVar1 = Enumerable.FirstOrDefault<KeyValuePair<string, string>>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		if ((String)SVar1.value != null) {
		}
		return defaultText;
	}

	[Token(Token = "0x6003D95")]
	[Address(RVA = "0x5A95190", Offset = "0x5A94190", VA = "0x5A95190")]
	public static string GetPropertyNodeText(XmlDocument xmlDocument, Type type, PropertyInfo property, string nodeType, string defaultText = "")
	{
		// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils$$GetPropertyNodeText): clean
		bool bVar1;
		String pSVar2;
		String[] values;
		String pSVar3;
		XmlNode node;
		String local_38;

		local_38 = null;
		if (property != null) {
			pSVar2 = (String)property.unknown();
			values = (String[])new string[5];
			if (values != null) {
				if ((int)values.Length != 0) {
					values[0] = "//member[@name=\"P:";
					if (type == null) goto label_05b9535a;
					pSVar3 = (String)type.unknown() ;
					if ((values.Length & 0xfffffffe) != 0) {
						values[1] = pSVar3;
						if (2 < (uint)values.Length) {
							values[2] = ".";
							if ((values.Length & 0xfffffffc) != 0) {
								values[3] = pSVar2;
								if (4 < (uint)values.Length) {
									values[4] = "\"]";
									pSVar2 = String.Concat(values);
									if (xmlDocument != null) {
										node = xmlDocument.SelectSingleNode(pSVar2);
										bVar1 = XmlDocumentUtils.TryGetInnerText(node, nodeType, ref local_38);
										if (bVar1) {
										}
										return defaultText;
									}
									goto label_05b9535a;
								}
							}
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05b9535a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003D96")]
	[Address(RVA = "0x5A95360", Offset = "0x5A94360", VA = "0x5A95360")]
	public static string GetFieldNodeText(XmlDocument xmlDocument, Type type, FieldInfo field, string nodeType, string defaultText = "")
	{
		// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils$$GetFieldNodeText): clean
		bool bVar1;
		String pSVar2;
		String[] values;
		String pSVar3;
		XmlNode node;
		String local_38;

		local_38 = null;
		if (field != null) {
			pSVar2 = (String)field.unknown();
			values = (String[])new string[5];
			if (values != null) {
				if ((int)values.Length != 0) {
					values[0] = "//member[@name=\"P:";
					if (type == null) goto label_05b9552a;
					pSVar3 = (String)type.unknown() ;
					if ((values.Length & 0xfffffffe) != 0) {
						values[1] = pSVar3;
						if (2 < (uint)values.Length) {
							values[2] = ".";
							if ((values.Length & 0xfffffffc) != 0) {
								values[3] = pSVar2;
								if (4 < (uint)values.Length) {
									values[4] = "\"]";
									pSVar2 = String.Concat(values);
									if (xmlDocument != null) {
										node = xmlDocument.SelectSingleNode(pSVar2);
										bVar1 = XmlDocumentUtils.TryGetInnerText(node, nodeType, ref local_38);
										if (bVar1) {
										}
										return defaultText;
									}
									goto label_05b9552a;
								}
							}
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05b9552a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003D97")]
	[Address(RVA = "0x5A946A0", Offset = "0x5A936A0", VA = "0x5A946A0")]
	private static bool TryGetInnerText(XmlNode node, string nodeType, out string innerText)
	{
		// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils$$TryGetInnerText): clean
		String pSVar1;
		bool bVar2;
		XmlNode local_20;

		local_20 = null;
		if (node != null) {
			pSVar1 = String.Concat(".//", nodeType);
			local_20 = node.SelectSingleNode(pSVar1);
			if (local_20 != null) {
				pSVar1 = local_20.get_InnerText();
				goto label_05b94771;
			}
		}
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
	label_05b94771: ;
		*innerText = pSVar1;
		return bVar2;
	}

	[Token(Token = "0x6003D98")]
	[Address(RVA = "0x5A95530", Offset = "0x5A94530", VA = "0x5A95530")]
	private static bool TrySelectSingleNode(this XmlNode node, string xpath, out XmlNode xNode)
	{
		// Lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c (CustomLogic.Editor.XmlDocumentUtils$$TrySelectSingleNode): clean
		XmlNode pSVar1;

		if (node == null) {
			throw new NullReferenceException();
		}
		pSVar1 = node.SelectSingleNode(xpath);
		*xNode = pSVar1;
		return *xNode != null;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/Editor/XmlDocumentUtils.c.

	// CustomLogic.Editor.XmlDocumentUtils.<>c__DisplayClass11_0$$.ctor: clean
	private void c__DisplayClass11_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.Editor.XmlDocumentUtils.<>c__DisplayClass12_0$$.ctor: clean
	private void c__DisplayClass12_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.Editor.XmlDocumentUtils$$.cctor: 10 lines keep C-only constructs
	static XmlDocumentUtils()
	{
		int piVar1;
		uint uVar2;
		String[] pSVar3;
		String pSVar5;
		List<string> __this;

		__this = new List<string>();
		pSVar5 = "Scripts.xml";
		if (__this != null) {
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar3 = __this._items;
			if (pSVar3 != null) {
				uVar2 = __this._size;
				if (uVar2 < (uint)pSVar3.Length) {
					__this._size = uVar2 + 1;
					pSVar3[(int)uVar2] = pSVar5;
				}
				else {
					__this.AddWithResize((object)pSVar5);
				}
				pSVar5 = "UnityEngine.xml";
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pSVar3 = __this._items;
				if (pSVar3 != null) {
					uVar2 = __this._size;
					if (uVar2 < (uint)pSVar3.Length) {
						__this._size = uVar2 + 1;
						pSVar3[(int)uVar2] = pSVar5;
					}
					else {
						__this.AddWithResize((object)pSVar5);
					}
					pSVar5 = "UnityEngine.PhysicsModule.xml";
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar3 = __this._items;
					if (pSVar3 != null) {
						uVar2 = __this._size;
						if (uVar2 < (uint)pSVar3.Length) {
							__this._size = uVar2 + 1;
							pSVar3[(int)uVar2] = pSVar5;
						}
						else {
							__this.AddWithResize((object)pSVar5);
						}
						pSVar5 = "UnityEditor.CoreModule.xml";
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar3 = __this._items;
						if (pSVar3 != null) {
							uVar2 = __this._size;
							if (uVar2 < (uint)pSVar3.Length) {
								__this._size = uVar2 + 1;
								pSVar3[(int)uVar2] = pSVar5;
							}
							else {
								__this.AddWithResize((object)pSVar5);
							}
							pSVar5 = "Photon3Unity3D.xml";
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							pSVar3 = __this._items;
							if (pSVar3 != null) {
								uVar2 = __this._size;
								if (uVar2 < (uint)pSVar3.Length) {
									__this._size = uVar2 + 1;
									pSVar3[(int)uVar2] = pSVar5;
								}
								else {
									__this.AddWithResize((object)pSVar5);
								}
								XmlDocumentUtils._priorityXml = __this;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.Editor.XmlDocumentUtils.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new XmlDocumentUtils.c();
		XmlDocumentUtils.c.__9 =(XmlDocumentUtils.c)__this;
		return;
	}

	// CustomLogic.Editor.XmlDocumentUtils.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.Editor.XmlDocumentUtils.<>c$$<GetConstructorNodeText>b__7_0: 2 lines keep C-only constructs
	private String c__GetConstructorNodeText_b__7_0(ParameterInfo x)
	{
		Il2CppMethodPointer vtableDispatch;
		Type pSVar1;
		String pSVar2;

		if (x != null) {
			pSVar1 = x.get_ParameterType();
			if (pSVar1 != null) {
				vtableDispatch = (pSVar1.klass.vtable)._26_unknown.methodPtr;
				pSVar2 = (String)(*vtableDispatch)(pSVar1,(pSVar1.klass.vtable)._26_unknown.method,vtableDispatch);
				return pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.Editor.XmlDocumentUtils.<>c$$<GetMethodNodeText>b__8_0: 2 lines keep C-only constructs
	private String c__GetMethodNodeText_b__8_0(ParameterInfo x)
	{
		Il2CppMethodPointer vtableDispatch;
		Type pSVar1;
		String pSVar2;

		if (x != null) {
			pSVar1 = x.get_ParameterType();
			if (pSVar1 != null) {
				vtableDispatch = (pSVar1.klass.vtable)._26_unknown.methodPtr;
				pSVar2 = (String)(*vtableDispatch)(pSVar1,(pSVar1.klass.vtable)._26_unknown.method,vtableDispatch);
				return pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.Editor.XmlDocumentUtils.<>c$$<GetMethodParamTexts>b__9_0: 2 lines keep C-only constructs
	private String c__GetMethodParamTexts_b__9_0(ParameterInfo x)
	{
		Il2CppMethodPointer vtableDispatch;
		Type pSVar1;
		String pSVar2;

		if (x != null) {
			pSVar1 = x.get_ParameterType();
			if (pSVar1 != null) {
				vtableDispatch = (pSVar1.klass.vtable)._26_unknown.methodPtr;
				pSVar2 = (String)(*vtableDispatch)(pSVar1,(pSVar1.klass.vtable)._26_unknown.method,vtableDispatch);
				return pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.Editor.XmlDocumentUtils.<>c$$<GetConstructorParamTexts>b__10_0: 2 lines keep C-only constructs
	private String c__GetConstructorParamTexts_b__10_0(ParameterInfo x)
	{
		Il2CppMethodPointer vtableDispatch;
		Type pSVar1;
		String pSVar2;

		if (x != null) {
			pSVar1 = x.get_ParameterType();
			if (pSVar1 != null) {
				vtableDispatch = (pSVar1.klass.vtable)._26_unknown.methodPtr;
				pSVar2 = (String)(*vtableDispatch)(pSVar1,(pSVar1.klass.vtable)._26_unknown.method,vtableDispatch);
				return pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.Editor.XmlDocumentUtils.<>c__DisplayClass11_0$$<GetParameterNodeText>b__0: clean
	private bool c__DisplayClass11_0__GetParameterNodeText_b__0(KeyValuePair<string, string> p)
	{
		ParameterInfo pSVar1;
		bool bVar2;
		String b;

		pSVar1 = this.parameterInfo;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		b = pSVar1.get_Name();
		bVar2 = (p.key == b);
		return bVar2;
	}

	// CustomLogic.Editor.XmlDocumentUtils.<>c__DisplayClass12_0$$<GetParameterNodeText>b__0: clean
	private bool c__DisplayClass12_0__GetParameterNodeText_b__0(KeyValuePair<string, string> p)
	{
		ParameterInfo pSVar1;
		bool bVar2;
		String b;

		pSVar1 = this.parameterInfo;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		b = pSVar1.get_Name();
		bVar2 = (p.key == b);
		return bVar2;
	}
}
