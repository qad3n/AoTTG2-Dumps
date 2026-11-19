// ==================== AoTTG2 cross-reference ====================
// Type: Utility.Format
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/Format.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Format.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x200092B")]
internal class Format
{
	[Token(Token = "0x200092C")]
	public class HMSFormatter : ICustomFormatter, IFormatProvider
	{
		[Token(Token = "0x4002E37")]
		[FieldOffset(Offset = "0x0")]
		private static Dictionary<string, string> timeformats;

		[Token(Token = "0x600569B")]
		[Address(RVA = "0x5CEF030", Offset = "0x5CEE030", VA = "0x5CEF030", Slot = "4")]
		public string Format(string format, object arg, IFormatProvider formatProvider)
		{
			// Lifted from source/cpp/Utility/Format.c (Utility.Format.HMSFormatter$$Format): clean
			Dictionary<object, object> __this_00;
			object __this_01;
			String pSVar1;

			__this_01 = new Format.PluralFormatter();
			__this_00 = (Dictionary<object, object>)Format.HMSFormatter.timeformats;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			pSVar1 = __this_00.get_Item((object)format);
			pSVar1 = String.Format((IFormatProvider)__this_01, pSVar1, arg);
			return pSVar1;
		}

		[Token(Token = "0x600569C")]
		[Address(RVA = "0x5CEF100", Offset = "0x5CEE100", VA = "0x5CEF100", Slot = "5")]
		public object GetFormat(Type formatType)
		{
			// Lifted from source/cpp/Utility/Format.c (Utility.Format.HMSFormatter$$GetFormat): clean
			Il2CppType handle;
			bool bVar1;
			Type right;

			handle = TypeRef_System_ICustomFormatter;
			right = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			bVar1 = (formatType == right);
			if (!bVar1) {
				this = null;
			}
			return (object)this;
		}

		[Token(Token = "0x600569D")]
		[Address(RVA = "0x5CEF010", Offset = "0x5CEE010", VA = "0x5CEF010")]
		public HMSFormatter()
		{
			// Lifted from source/cpp/Utility/Format.c (Utility.Format.HMSFormatter$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x200092D")]
	public class PluralFormatter : ICustomFormatter, IFormatProvider
	{
		[Token(Token = "0x600569F")]
		[Address(RVA = "0x5CEF310", Offset = "0x5CEE310", VA = "0x5CEF310", Slot = "4")]
		public string Format(string format, object arg, IFormatProvider formatProvider)
		{
			// Lifted from source/cpp/Utility/Format.c (Utility.Format.PluralFormatter$$Format): 2 lines keep C-only constructs
			uint uVar1;
			bool bVar2;
			uint uVar3;
			String[] pSVar4;
			String pSVar5;
			String* ppSVar6;

			if (arg == null) {
		label_05def3ec: ;
				pSVar5 = String.Format(format, arg);
				return pSVar5;
			}
			if (format != null) {
				pSVar4 = format.Split(0x3a, 0);
				if (pSVar4 != null) {
					if ((int)pSVar4.Length == 0) {
		label_05def426: ;
						throw new IndexOutOfRangeException();
					}
					bVar2 = (pSVar4[0] == "P");
					if (!bVar2) goto label_05def3ec;
					pSVar5 = (String)(*arg.klass.vtable[3].methodPtr)(arg,arg.klass.vtable[3].method);
					bVar2 = (pSVar5 == "1");
					uVar3 = bVar2 + 1;
					uVar1 = (uint)pSVar4.Length;
					if ((int)uVar3 < (int)uVar1) {
						if (uVar1 <= uVar3) goto label_05def426;
						ppSVar6 = pSVar4.m_Items + uVar3;
					}
					else {
						ppSVar6 = &"";
					}
					pSVar5 = String.Format("{0} {1}", arg, (object)*ppSVar6);
					return pSVar5;
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x60056A0")]
		[Address(RVA = "0x5CEF430", Offset = "0x5CEE430", VA = "0x5CEF430", Slot = "5")]
		public object GetFormat(Type formatType)
		{
			// Lifted from source/cpp/Utility/Format.c (Utility.Format.PluralFormatter$$GetFormat): clean
			Il2CppType handle;
			bool bVar1;
			Type right;

			handle = TypeRef_System_ICustomFormatter;
			right = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			bVar1 = (formatType == right);
			if (!bVar1) {
				this = null;
			}
			return (object)this;
		}

		[Token(Token = "0x60056A1")]
		[Address(RVA = "0x5CEF0F0", Offset = "0x5CEE0F0", VA = "0x5CEF0F0")]
		public PluralFormatter()
		{
			// Lifted from source/cpp/Utility/Format.c (Utility.Format.PluralFormatter$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x6005698")]
	[Address(RVA = "0x5CEE8D0", Offset = "0x5CED8D0", VA = "0x5CEE8D0")]
	public static string Suffix(ulong num)
	{
		// Lifted from source/cpp/Utility/Format.c (Utility.Format$$Suffix): 8 lines keep C-only constructs
		object arg0;
		String pSVar1;
		String* ppSVar2;
		Math method_00;
		double dVar3;
		byte[] auVar4 = new byte[16];
		double local_38;
		double local_30;
		double local_28;
		double dStack_20;

		if (num == 0) {
			return "0";
		}
		method_00 = typeof(Math);
		auVar4._8_4_ = (int)(num >> 0x20);
		auVar4._0_8_ = num;
		auVar4._12_4_ = 0x45300000;
		dStack_20 = auVar4._8_8_ - 1.9342813113834067e+25;
		local_28 = dStack_20 + ((double)CONCAT44(0x43300000, (int)num) - 4503599627370496.0);
		dVar3 = log10(local_28, (MethodInfo)method_00);
		local_38 = Math.Pow(1000.0, (double)((int)dVar3 / 3));
		local_38 = local_28 / local_38;
		arg0 = (object)local_38;
		pSVar1 = String.Format("{0:G3}", arg0);
		local_30 = Convert.ToDouble(pSVar1);
		pSVar1 = local_30.ToString("R0");
		switch((int)dVar3 / 3) {
		case 1:
			ppSVar2 = &"K";
			break;
		case 2:
			ppSVar2 = &"M";
			break;
		case 3:
			ppSVar2 = &"B";
			break;
		case 4:
			ppSVar2 = &"T";
			break;
		case 5:
			ppSVar2 = &"Qa";
			break;
		case 6:
			ppSVar2 = &"Qi";
			break;
		default: ;
			ppSVar2 = &"";
		}
		pSVar1 = String.Concat(pSVar1, *ppSVar2);
		return pSVar1;
	}

	[Token(Token = "0x6005699")]
	[Address(RVA = "0x5CEEAF0", Offset = "0x5CEDAF0", VA = "0x5CEEAF0")]
	public static string GetReadableTimespan(TimeSpan ts)
	{
		// Lifted from source/cpp/Utility/Format.c (Utility.Format$$GetReadableTimespan): 7 lines keep C-only constructs
		uint uVar3;
		SortedList<long, string> __this;
		System_Collections_Generic_IList_TKey__o source;
		System_Collections_Generic_List_TSource__o __this_00;
		object pIVar4;
		object pIVar5;
		long key;
		String pSVar7;
		Object[] args;
		object pIVar8;
		double dVar11;
		TimeSpan local_48;
		int local_40;
		int local_3c;
		int local_38;
		int local_34;

		local_48 = (TimeSpan)(TimeSpan)ts._ticks;
		__this = new SortedList<long, string>();
		if (__this == null) {
	label_05deefea: ;
			throw new NullReferenceException();
		}
		__this.Add(0x3b, (Il2CppObject *)"{3:S}");
		__this.Add(0x3c, (Il2CppObject *)"{2:M}");
		__this.Add(0xe0f, (Il2CppObject *)"{2:M}, {3:S}");
		__this.Add(0xe10, (Il2CppObject *)"{1:H}");
		__this.Add(0x1517f, (Il2CppObject *)"{1:H}, {2:M}");
		__this.Add(0x15180, (Il2CppObject *)"{0:D}");
		__this.Add(0x7fffffffffffffff, (Il2CppObject *)"{0:D}, {1:H}");
		source = __this.Keys;
		__this_00 = Enumerable.ToList<long>((System_Collections_Generic_IEnumerable_TSource__o)source);
		dVar11 = local_48.TotalSeconds;
		if (__this_00 == null) goto label_05deefea;
		uVar3 = __this_00.BinarySearch((long)dVar11);
		if ((int)uVar3 < 0) {
			uVar3 = ~uVar3;
		}
		pIVar4 = new Format.HMSFormatter();
		pIVar5 = (object)__this.Keys;
		if (pIVar5 == null) goto label_05deefea;
		key = pIVar5.get_Item(uVar3);
		pSVar7 = __this.get_Item(key);
		args = (Object[])new object[4];
		local_34 = local_48.Days;
		pIVar5 = (object)local_34;
		if (args == null) goto label_05deefea;
		if (pIVar5 != null) {
			pIVar8 = il2cpp_vm_Object_IsInst(pIVar5, (((args.obj).klass)._1).element_class);
			if (pIVar8 == null) goto label_05deeff4;
		}
		if ((int)args.Length != 0) {
			args[0] = pIVar5;
			local_38 = local_48.Hours;
			pIVar5 = (object)local_38;
			if (pIVar5 != null) {
				pIVar8 = il2cpp_vm_Object_IsInst(pIVar5, (((args.obj).klass)._1).element_class);
				if (pIVar8 == null) goto label_05deeff4;
			}
			if ((args.Length & 0xfffffffe) == 0) goto label_05deefef;
			args[1] = pIVar5;
			local_3c = local_48.Minutes;
			pIVar5 = (object)local_3c;
			if (pIVar5 != null) {
				pIVar8 = il2cpp_vm_Object_IsInst(pIVar5, (((args.obj).klass)._1).element_class);
				if (pIVar8 == null) goto label_05deeff4;
			}
			if (2 < (uint)args.Length) {
				args[2] = pIVar5;
				local_40 = local_48.Seconds;
				pIVar5 = (object)local_40;
				if (pIVar5 != null) {
					pIVar8 = il2cpp_vm_Object_IsInst(pIVar5, (((args.obj).klass)._1).element_class);
					if (pIVar8 == null) {
	label_05deeff4: ;
						pIVar4 = new ArrayTypeMismatchException();
						throw pIVar4;
					}
				}
				if ((args.Length & 0xfffffffc) != 0) {
					args[3] = pIVar5;
					pSVar7 = String.Format((IFormatProvider)pIVar4, pSVar7, args);
					return pSVar7;
				}
			}
		}
	label_05deefef: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600569A")]
	[Address(RVA = "0x5CEF020", Offset = "0x5CEE020", VA = "0x5CEF020")]
	public Format()
	{
		// Lifted from source/cpp/Utility/Format.c (Utility.Format$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/Format.c.

	// Utility.Format.HMSFormatter$$.cctor: clean
	private static void HMSFormatter__cctor()
	{
		Dictionary<string, string> __this;

		__this = new Dictionary<string, string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"S", (Il2CppObject *)"{0:P:seconds:second}");
		__this.Add((Il2CppObject *)"M", (Il2CppObject *)"{0:P:minutes:minute}");
		__this.Add((Il2CppObject *)"H", (Il2CppObject *)"{0:P:hours:hour}");
		__this.Add((Il2CppObject *)"D", (Il2CppObject *)"{0:P:days:day}");
		Format.HMSFormatter.timeformats = __this;
		return;
	}
}
