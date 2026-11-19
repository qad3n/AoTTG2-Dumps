// ==================== AoTTG2 cross-reference ====================
// Type: Discord.StoreManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/StoreManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000132")]
public class StoreManager
{
	[Token(Token = "0x2000133")]
	internal struct FFIEvents
	{
		[Token(Token = "0x2000134")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void EntitlementCreateHandler(IntPtr ptr, ref Entitlement entitlement);

		[Token(Token = "0x2000135")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void EntitlementDeleteHandler(IntPtr ptr, ref Entitlement entitlement);

		[Token(Token = "0x40001D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal EntitlementCreateHandler OnEntitlementCreate;

		[Token(Token = "0x40001DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal EntitlementDeleteHandler OnEntitlementDelete;
	}

	[Token(Token = "0x2000136")]
	internal struct FFIMethods
	{
		[Token(Token = "0x2000137")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void FetchSkusCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000138")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void FetchSkusMethod(IntPtr methodsPtr, IntPtr callbackData, FetchSkusCallback callback);

		[Token(Token = "0x2000139")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void CountSkusMethod(IntPtr methodsPtr, ref int count);

		[Token(Token = "0x200013A")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetSkuMethod(IntPtr methodsPtr, long skuId, ref Sku sku);

		[Token(Token = "0x200013B")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetSkuAtMethod(IntPtr methodsPtr, int index, ref Sku sku);

		[Token(Token = "0x200013C")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void FetchEntitlementsCallback(IntPtr ptr, Result result);

		[Token(Token = "0x200013D")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void FetchEntitlementsMethod(IntPtr methodsPtr, IntPtr callbackData, FetchEntitlementsCallback callback);

		[Token(Token = "0x200013E")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void CountEntitlementsMethod(IntPtr methodsPtr, ref int count);

		[Token(Token = "0x200013F")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetEntitlementMethod(IntPtr methodsPtr, long entitlementId, ref Entitlement entitlement);

		[Token(Token = "0x2000140")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetEntitlementAtMethod(IntPtr methodsPtr, int index, ref Entitlement entitlement);

		[Token(Token = "0x2000141")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result HasSkuEntitlementMethod(IntPtr methodsPtr, long skuId, ref bool hasEntitlement);

		[Token(Token = "0x2000142")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void StartPurchaseCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000143")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void StartPurchaseMethod(IntPtr methodsPtr, long skuId, IntPtr callbackData, StartPurchaseCallback callback);

		[Token(Token = "0x40001DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal FetchSkusMethod FetchSkus;

		[Token(Token = "0x40001DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal CountSkusMethod CountSkus;

		[Token(Token = "0x40001DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal GetSkuMethod GetSku;

		[Token(Token = "0x40001DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal GetSkuAtMethod GetSkuAt;

		[Token(Token = "0x40001DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal FetchEntitlementsMethod FetchEntitlements;

		[Token(Token = "0x40001E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal CountEntitlementsMethod CountEntitlements;

		[Token(Token = "0x40001E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal GetEntitlementMethod GetEntitlement;

		[Token(Token = "0x40001E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		internal GetEntitlementAtMethod GetEntitlementAt;

		[Token(Token = "0x40001E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		internal HasSkuEntitlementMethod HasSkuEntitlement;

		[Token(Token = "0x40001E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		internal StartPurchaseMethod StartPurchase;
	}

	[Token(Token = "0x2000144")]
	public delegate void FetchSkusHandler(Result result);

	[Token(Token = "0x2000145")]
	public delegate void FetchEntitlementsHandler(Result result);

	[Token(Token = "0x2000146")]
	public delegate void StartPurchaseHandler(Result result);

	[Token(Token = "0x2000147")]
	public delegate void EntitlementCreateHandler(ref Entitlement entitlement);

	[Token(Token = "0x2000148")]
	public delegate void EntitlementDeleteHandler(ref Entitlement entitlement);

	[Token(Token = "0x40001D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x40001D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x40001D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private EntitlementCreateHandler m_OnEntitlementCreate;

	[Token(Token = "0x40001D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private EntitlementDeleteHandler m_OnEntitlementDelete;

	[Token(Token = "0x1700000E")]
	private FFIMethods Methods
	{
		[Token(Token = "0x6000471")]
		[Address(RVA = "0x315E080", Offset = "0x315D080", VA = "0x315E080")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x14000013")]
	public event EntitlementCreateHandler OnEntitlementCreate
	{
		[Token(Token = "0x6000472")]
		[Address(RVA = "0x315E1A0", Offset = "0x315D1A0", VA = "0x315E1A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x315E230", Offset = "0x315D230", VA = "0x315E230")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000014")]
	public event EntitlementDeleteHandler OnEntitlementDelete
	{
		[Token(Token = "0x6000474")]
		[Address(RVA = "0x315E2C0", Offset = "0x315D2C0", VA = "0x315E2C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000475")]
		[Address(RVA = "0x315E350", Offset = "0x315D350", VA = "0x315E350")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x315E3E0", Offset = "0x315D3E0", VA = "0x315E3E0")]
	internal StoreManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x315E460", Offset = "0x315D460", VA = "0x315E460")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x315DBC0", Offset = "0x315CBC0", VA = "0x315DBC0")]
	[MonoPInvokeCallback]
	private static void FetchSkusCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x315E780", Offset = "0x315D780", VA = "0x315E780")]
	public void FetchSkus(FetchSkusHandler callback)
	{
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x315E950", Offset = "0x315D950", VA = "0x315E950")]
	public int CountSkus()
	{
		return default(int);
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x315E9A0", Offset = "0x315D9A0", VA = "0x315E9A0")]
	public Sku GetSku(long skuId)
	{
		return default(Sku);
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x315EA60", Offset = "0x315DA60", VA = "0x315EA60")]
	public Sku GetSkuAt(int index)
	{
		return default(Sku);
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x315DCA0", Offset = "0x315CCA0", VA = "0x315DCA0")]
	[MonoPInvokeCallback]
	private static void FetchEntitlementsCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x315EB20", Offset = "0x315DB20", VA = "0x315EB20")]
	public void FetchEntitlements(FetchEntitlementsHandler callback)
	{
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x315ECF0", Offset = "0x315DCF0", VA = "0x315ECF0")]
	public int CountEntitlements()
	{
		return default(int);
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x315ED40", Offset = "0x315DD40", VA = "0x315ED40")]
	public Entitlement GetEntitlement(long entitlementId)
	{
		return default(Entitlement);
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x315EDF0", Offset = "0x315DDF0", VA = "0x315EDF0")]
	public Entitlement GetEntitlementAt(int index)
	{
		return default(Entitlement);
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x315EEA0", Offset = "0x315DEA0", VA = "0x315EEA0")]
	public bool HasSkuEntitlement(long skuId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x315DD80", Offset = "0x315CD80", VA = "0x315DD80")]
	[MonoPInvokeCallback]
	private static void StartPurchaseCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x315EF40", Offset = "0x315DF40", VA = "0x315EF40")]
	public void StartPurchase(long skuId, StartPurchaseHandler callback)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x315DE60", Offset = "0x315CE60", VA = "0x315DE60")]
	[MonoPInvokeCallback]
	private static void OnEntitlementCreateImpl(IntPtr ptr, ref Entitlement entitlement)
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x315DF70", Offset = "0x315CF70", VA = "0x315DF70")]
	[MonoPInvokeCallback]
	private static void OnEntitlementDeleteImpl(IntPtr ptr, ref Entitlement entitlement)
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x315F120", Offset = "0x315E120", VA = "0x315F120")]
	public IEnumerable<Entitlement> GetEntitlements()
	{
		return null;
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x315F2B0", Offset = "0x315E2B0", VA = "0x315F2B0")]
	public IEnumerable<Sku> GetSkus()
	{
		return null;
	}
}
