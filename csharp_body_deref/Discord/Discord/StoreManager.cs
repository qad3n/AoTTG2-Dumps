using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000134")]
public class StoreManager
{
	[Token(Token = "0x2000135")]
	internal struct FFIEvents
	{
		[Token(Token = "0x2000136")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void EntitlementCreateHandler(IntPtr ptr, ref Entitlement entitlement);

		[Token(Token = "0x2000137")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void EntitlementDeleteHandler(IntPtr ptr, ref Entitlement entitlement);

		[Token(Token = "0x40001DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal EntitlementCreateHandler OnEntitlementCreate;

		[Token(Token = "0x40001DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal EntitlementDeleteHandler OnEntitlementDelete;
	}

	[Token(Token = "0x2000138")]
	internal struct FFIMethods
	{
		[Token(Token = "0x2000139")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void FetchSkusCallback(IntPtr ptr, Result result);

		[Token(Token = "0x200013A")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void FetchSkusMethod(IntPtr methodsPtr, IntPtr callbackData, FetchSkusCallback callback);

		[Token(Token = "0x200013B")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void CountSkusMethod(IntPtr methodsPtr, ref int count);

		[Token(Token = "0x200013C")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetSkuMethod(IntPtr methodsPtr, long skuId, ref Sku sku);

		[Token(Token = "0x200013D")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetSkuAtMethod(IntPtr methodsPtr, int index, ref Sku sku);

		[Token(Token = "0x200013E")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void FetchEntitlementsCallback(IntPtr ptr, Result result);

		[Token(Token = "0x200013F")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void FetchEntitlementsMethod(IntPtr methodsPtr, IntPtr callbackData, FetchEntitlementsCallback callback);

		[Token(Token = "0x2000140")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void CountEntitlementsMethod(IntPtr methodsPtr, ref int count);

		[Token(Token = "0x2000141")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetEntitlementMethod(IntPtr methodsPtr, long entitlementId, ref Entitlement entitlement);

		[Token(Token = "0x2000142")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetEntitlementAtMethod(IntPtr methodsPtr, int index, ref Entitlement entitlement);

		[Token(Token = "0x2000143")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result HasSkuEntitlementMethod(IntPtr methodsPtr, long skuId, ref bool hasEntitlement);

		[Token(Token = "0x2000144")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void StartPurchaseCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000145")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void StartPurchaseMethod(IntPtr methodsPtr, long skuId, IntPtr callbackData, StartPurchaseCallback callback);

		[Token(Token = "0x40001E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal FetchSkusMethod FetchSkus;

		[Token(Token = "0x40001E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal CountSkusMethod CountSkus;

		[Token(Token = "0x40001E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal GetSkuMethod GetSku;

		[Token(Token = "0x40001E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal GetSkuAtMethod GetSkuAt;

		[Token(Token = "0x40001E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal FetchEntitlementsMethod FetchEntitlements;

		[Token(Token = "0x40001E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal CountEntitlementsMethod CountEntitlements;

		[Token(Token = "0x40001E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal GetEntitlementMethod GetEntitlement;

		[Token(Token = "0x40001E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		internal GetEntitlementAtMethod GetEntitlementAt;

		[Token(Token = "0x40001E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		internal HasSkuEntitlementMethod HasSkuEntitlement;

		[Token(Token = "0x40001E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		internal StartPurchaseMethod StartPurchase;
	}

	[Token(Token = "0x2000146")]
	public delegate void FetchSkusHandler(Result result);

	[Token(Token = "0x2000147")]
	public delegate void FetchEntitlementsHandler(Result result);

	[Token(Token = "0x2000148")]
	public delegate void StartPurchaseHandler(Result result);

	[Token(Token = "0x2000149")]
	public delegate void EntitlementCreateHandler(ref Entitlement entitlement);

	[Token(Token = "0x200014A")]
	public delegate void EntitlementDeleteHandler(ref Entitlement entitlement);

	[Token(Token = "0x40001DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x40001DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x1700000E")]
	private FFIMethods Methods
	{
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x234D590", Offset = "0x234D590", VA = "0x234D590")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x14000013")]
	public event EntitlementCreateHandler OnEntitlementCreate
	{
		[Token(Token = "0x6000474")]
		[Address(RVA = "0x234D6B0", Offset = "0x234D6B0", VA = "0x234D6B0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000475")]
		[Address(RVA = "0x234D740", Offset = "0x234D740", VA = "0x234D740")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000014")]
	public event EntitlementDeleteHandler OnEntitlementDelete
	{
		[Token(Token = "0x6000476")]
		[Address(RVA = "0x234D7D0", Offset = "0x234D7D0", VA = "0x234D7D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000477")]
		[Address(RVA = "0x234D860", Offset = "0x234D860", VA = "0x234D860")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x234D8F0", Offset = "0x234D8F0", VA = "0x234D8F0")]
	internal StoreManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x234D970", Offset = "0x234D970", VA = "0x234D970")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x234D0D0", Offset = "0x234D0D0", VA = "0x234D0D0")]
	[MonoPInvokeCallback]
	private static void FetchSkusCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x234DC90", Offset = "0x234DC90", VA = "0x234DC90")]
	public void FetchSkus(FetchSkusHandler callback)
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x234DE80", Offset = "0x234DE80", VA = "0x234DE80")]
	public int CountSkus()
	{
		return default(int);
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x234DED0", Offset = "0x234DED0", VA = "0x234DED0")]
	public Sku GetSku(long skuId)
	{
		return default(Sku);
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x234DF90", Offset = "0x234DF90", VA = "0x234DF90")]
	public Sku GetSkuAt(int index)
	{
		return default(Sku);
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x234D1B0", Offset = "0x234D1B0", VA = "0x234D1B0")]
	[MonoPInvokeCallback]
	private static void FetchEntitlementsCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x234E050", Offset = "0x234E050", VA = "0x234E050")]
	public void FetchEntitlements(FetchEntitlementsHandler callback)
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x234E240", Offset = "0x234E240", VA = "0x234E240")]
	public int CountEntitlements()
	{
		return default(int);
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x234E290", Offset = "0x234E290", VA = "0x234E290")]
	public Entitlement GetEntitlement(long entitlementId)
	{
		return default(Entitlement);
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x234E340", Offset = "0x234E340", VA = "0x234E340")]
	public Entitlement GetEntitlementAt(int index)
	{
		return default(Entitlement);
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x234E3F0", Offset = "0x234E3F0", VA = "0x234E3F0")]
	public bool HasSkuEntitlement(long skuId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x234D290", Offset = "0x234D290", VA = "0x234D290")]
	[MonoPInvokeCallback]
	private static void StartPurchaseCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x234E490", Offset = "0x234E490", VA = "0x234E490")]
	public void StartPurchase(long skuId, StartPurchaseHandler callback)
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x234D370", Offset = "0x234D370", VA = "0x234D370")]
	[MonoPInvokeCallback]
	private static void OnEntitlementCreateImpl(IntPtr ptr, ref Entitlement entitlement)
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x234D480", Offset = "0x234D480", VA = "0x234D480")]
	[MonoPInvokeCallback]
	private static void OnEntitlementDeleteImpl(IntPtr ptr, ref Entitlement entitlement)
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x234E680", Offset = "0x234E680", VA = "0x234E680")]
	public IEnumerable<Entitlement> GetEntitlements()
	{
		return null;
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x234E820", Offset = "0x234E820", VA = "0x234E820")]
	public IEnumerable<Sku> GetSkus()
	{
		return null;
	}
}
