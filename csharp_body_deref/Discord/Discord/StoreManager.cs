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
		[Address(RVA = "0x544FE0", Offset = "0x5435E0", VA = "0x180544FE0")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x14000013")]
	public event EntitlementCreateHandler OnEntitlementCreate
	{
		[Token(Token = "0x6000472")]
		[Address(RVA = "0x544EA0", Offset = "0x5434A0", VA = "0x180544EA0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x545110", Offset = "0x543710", VA = "0x180545110")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000014")]
	public event EntitlementDeleteHandler OnEntitlementDelete
	{
		[Token(Token = "0x6000474")]
		[Address(RVA = "0x544F40", Offset = "0x543540", VA = "0x180544F40")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000475")]
		[Address(RVA = "0x5451B0", Offset = "0x5437B0", VA = "0x1805451B0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x544DD0", Offset = "0x5433D0", VA = "0x180544DD0")]
	internal StoreManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x544720", Offset = "0x542D20", VA = "0x180544720")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x543C40", Offset = "0x542240", VA = "0x180543C40")]
	[MonoPInvokeCallback]
	private static void FetchSkusCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x543D50", Offset = "0x542350", VA = "0x180543D50")]
	public void FetchSkus(FetchSkusHandler callback)
	{
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x543980", Offset = "0x541F80", VA = "0x180543980")]
	public int CountSkus()
	{
		return default(int);
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x544320", Offset = "0x542920", VA = "0x180544320")]
	public Sku GetSku(long skuId)
	{
		return default(Sku);
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x544260", Offset = "0x542860", VA = "0x180544260")]
	public Sku GetSkuAt(int index)
	{
		return default(Sku);
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x5439E0", Offset = "0x541FE0", VA = "0x1805439E0")]
	[MonoPInvokeCallback]
	private static void FetchEntitlementsCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x543AF0", Offset = "0x5420F0", VA = "0x180543AF0")]
	public void FetchEntitlements(FetchEntitlementsHandler callback)
	{
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x543920", Offset = "0x541F20", VA = "0x180543920")]
	public int CountEntitlements()
	{
		return default(int);
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x543F60", Offset = "0x542560", VA = "0x180543F60")]
	public Entitlement GetEntitlement(long entitlementId)
	{
		return default(Entitlement);
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x543EA0", Offset = "0x5424A0", VA = "0x180543EA0")]
	public Entitlement GetEntitlementAt(int index)
	{
		return default(Entitlement);
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x544660", Offset = "0x542C60", VA = "0x180544660")]
	public bool HasSkuEntitlement(long skuId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x544B60", Offset = "0x543160", VA = "0x180544B60")]
	[MonoPInvokeCallback]
	private static void StartPurchaseCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x544C70", Offset = "0x543270", VA = "0x180544C70")]
	public void StartPurchase(long skuId, StartPurchaseHandler callback)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x544920", Offset = "0x542F20", VA = "0x180544920")]
	[MonoPInvokeCallback]
	private static void OnEntitlementCreateImpl(IntPtr ptr, ref Entitlement entitlement)
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x544A40", Offset = "0x543040", VA = "0x180544A40")]
	[MonoPInvokeCallback]
	private static void OnEntitlementDeleteImpl(IntPtr ptr, ref Entitlement entitlement)
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x544020", Offset = "0x542620", VA = "0x180544020")]
	public IEnumerable<Entitlement> GetEntitlements()
	{
		return null;
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x5443E0", Offset = "0x5429E0", VA = "0x1805443E0")]
	public IEnumerable<Sku> GetSkus()
	{
		return null;
	}
}
