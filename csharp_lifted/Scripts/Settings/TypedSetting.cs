// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TypedSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/TypedSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/TypedSetting.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200011E")]
internal abstract class TypedSetting<T> : BaseSetting
{
	[Token(Token = "0x4000673")]
	[FieldOffset(Offset = "0x0")]
	protected T DefaultValue;

	[Token(Token = "0x4000674")]
	[FieldOffset(Offset = "0x0")]
	protected T _value;

	[Token(Token = "0x170000CE")]
	public T Value
	{
		[Token(Token = "0x6000611")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000612")]
		set
		{
		}
	}

	[Token(Token = "0x6000613")]
	public TypedSetting()
	{
	}

	[Token(Token = "0x6000614")]
	public TypedSetting(T defaultValue)
	{
	}

	[Token(Token = "0x6000615")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x6000616")]
	public override object GetDefaultValue()
	{
		return null;
	}

	[Token(Token = "0x6000617")]
	protected virtual T SanitizeValue(T value)
	{
		return (T)null;
	}

	[Token(Token = "0x6000618")]
	public override string ToString()
	{
		return null;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/TypedSetting.c.

	// Settings.TypedSetting<bool>$$get_Value: clean
	private bool bool__get_Value()
	{
		return this._value;
	}

	// Settings.TypedSetting<bool>$$set_Value: clean
	private void bool__set_Value(bool value)
	{
		bool bVar1;

		bVar1 = (bool)this.SanitizeValue(value);
		this._value = bVar1;
		return;
	}

	// Settings.TypedSetting<bool>$$.ctor: clean
	private void bool___ctor()
	{
		base();
		return;
	}

	// Settings.TypedSetting<bool>$$.ctor: 5 lines keep C-only constructs
	private void bool___ctor(bool defaultValue)
	{
		Il2CppMethodPointer vtableDispatch;
		bool bVar1;
		ulong extraout_RDX;
		undefined7 in_register_00000031;

		base();
		bVar1 = (bool)this.SanitizeValue(CONCAT71(in_register_00000031, defaultValue) & 0xffffffff);
		this.DefaultValue = bVar1;
		vtableDispatch = (this.klass.vtable)._4_SetDefault.methodPtr;
		(*vtableDispatch)(this,(this.klass.vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
		return;
	}

	// Settings.TypedSetting<bool>$$SetDefault: clean
	private void bool__SetDefault()
	{
		bool bVar1;

		bVar1 = (bool)this.SanitizeValue((ulong)this.DefaultValue);
		this._value = bVar1;
		return;
	}

	// Settings.TypedSetting<bool>$$GetDefaultValue: clean
	private object bool__GetDefaultValue()
	{
		object pIVar1;

		return pIVar1;
	}

	// Settings.TypedSetting<bool>$$SanitizeValue: clean
	private bool bool__SanitizeValue(bool value)
	{
		return value;
	}

	// Settings.TypedSetting<bool>$$ToString: clean
	private String bool__ToString()
	{
		String pSVar1;

		return pSVar1;
	}

	// Settings.TypedSetting<int>$$get_Value: clean
	private int int__get_Value()
	{
		return this._value;
	}

	// Settings.TypedSetting<int>$$set_Value: clean
	private void int__set_Value(int value)
	{
		int iVar1;

		iVar1 = this.SanitizeValue(value);
		this._value = iVar1;
		return;
	}

	// Settings.TypedSetting<int>$$.ctor: clean
	private void int___ctor()
	{
		base();
		return;
	}

	// Settings.TypedSetting<int>$$.ctor: 3 lines keep C-only constructs
	private void int___ctor(int defaultValue)
	{
		Il2CppMethodPointer vtableDispatch;
		int iVar1;
		ulong extraout_RDX;

		base();
		iVar1 = this.SanitizeValue(defaultValue);
		this.DefaultValue = iVar1;
		vtableDispatch = (this.klass.vtable)._4_SetDefault.methodPtr;
		(*vtableDispatch)(this,(this.klass.vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
		return;
	}

	// Settings.TypedSetting<int>$$SetDefault: clean
	private void int__SetDefault()
	{
		int iVar1;

		iVar1 = this.SanitizeValue((ulong)(uint)this.DefaultValue);
		this._value = iVar1;
		return;
	}

	// Settings.TypedSetting<int>$$GetDefaultValue: clean
	private object int__GetDefaultValue()
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// Settings.TypedSetting<int>$$SanitizeValue: clean
	private int int__SanitizeValue(int value)
	{
		return value;
	}

	// Settings.TypedSetting<int>$$ToString: clean
	private String int__ToString()
	{
		String pSVar1;

		return pSVar1;
	}

	// Settings.TypedSetting<object>$$get_Value: clean
	private object object__get_Value()
	{
		return this._value;
	}

	// Settings.TypedSetting<object>$$set_Value: clean
	private void object__set_Value(object value)
	{
		object pIVar1;

		pIVar1 = (object)this.SanitizeValue(value);
		this._value = pIVar1;
		return;
	}

	// Settings.TypedSetting<object>$$.ctor: clean
	private void object___ctor()
	{
		base();
		return;
	}

	// Settings.TypedSetting<object>$$.ctor: clean
	private void object___ctor(object defaultValue)
	{
		object pIVar1;

		base();
		pIVar1 = (object)this.SanitizeValue(defaultValue);
		this.DefaultValue = pIVar1;
		this.SetDefault();
		return;
	}

	// Settings.TypedSetting<object>$$SetDefault: clean
	private void object__SetDefault()
	{
		object pIVar1;

		pIVar1 = (object)this.SanitizeValue(this.DefaultValue);
		this._value = pIVar1;
		return;
	}

	// Settings.TypedSetting<object>$$GetDefaultValue: clean
	private object object__GetDefaultValue()
	{
		return this.DefaultValue;
	}

	// Settings.TypedSetting<object>$$SanitizeValue: clean
	private object object__SanitizeValue(object value)
	{
		return value;
	}

	// Settings.TypedSetting<object>$$ToString: 3 lines keep C-only constructs
	private String object__ToString()
	{
		object pIVar1;
		Il2CppMethodPointer vtableDispatch;
		String pSVar2;
		ulong in_RDX;

		pIVar1 = this._value;
		if (pIVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = pIVar1.klass.vtable[3].methodPtr;
		pSVar2 = (String)(*vtableDispatch)(pIVar1,pIVar1.klass.vtable[3].method,in_RDX,vtableDispatch);
		return pSVar2;
	}

	// Settings.TypedSetting<float>$$get_Value: clean
	private float float__get_Value()
	{
		return this._value;
	}

	// Settings.TypedSetting<float>$$set_Value: clean
	private void float__set_Value(float value)
	{
		float fVar1;

		fVar1 = (float)this.SanitizeValue();
		this._value = fVar1;
		return;
	}

	// Settings.TypedSetting<float>$$.ctor: clean
	private void float___ctor()
	{
		base();
		return;
	}

	// Settings.TypedSetting<float>$$.ctor: 3 lines keep C-only constructs
	private void float___ctor(float defaultValue)
	{
		Il2CppMethodPointer vtableDispatch;
		ulong extraout_RDX;
		float fVar1;

		base();
		fVar1 = (float)defaultValue.SanitizeValue(this);
		this.DefaultValue = fVar1;
		vtableDispatch = (this.klass.vtable)._4_SetDefault.methodPtr;
		(*vtableDispatch)(this,(this.klass.vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
		return;
	}

	// Settings.TypedSetting<float>$$SetDefault: clean
	private void float__SetDefault()
	{
		float fVar1;

		fVar1 = (float)(this.DefaultValue).SanitizeValue(this);
		this._value = fVar1;
		return;
	}

	// Settings.TypedSetting<float>$$GetDefaultValue: clean
	private object float__GetDefaultValue()
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// Settings.TypedSetting<float>$$SanitizeValue: clean
	private float float__SanitizeValue(float value)
	{
		return value;
	}

	// Settings.TypedSetting<float>$$ToString: clean
	private String float__ToString()
	{
		String pSVar1;

		return pSVar1;
	}

	// Settings.TypedSetting<Vector3>$$get_Value: clean
	private Vector3 Vector3__get_Value()
	{
		return (Vector3)this._value;
	}

	// Settings.TypedSetting<Vector3>$$set_Value: 1 lines keep C-only constructs
	private void Vector3__set_Value(Vector3 value)
	{
		ulong uVar1;
		float fVar2;

		fVar2 = value.z;
		uVar1 = value._0_8_.SanitizeValue(this);
		this._value.x = (float)(int)uVar1;
		this._value.y = (float)(int)((ulong)uVar1 >> 0x20);
		this._value.z = fVar2;
		return;
	}

	// Settings.TypedSetting<Vector3>$$.ctor: clean
	private void Vector3___ctor()
	{
		base();
		return;
	}

	// Settings.TypedSetting<Vector3>$$.ctor: 3 lines keep C-only constructs
	private void Vector3___ctor(Vector3 defaultValue)
	{
		Il2CppMethodPointer vtableDispatch;
		ulong uVar1;
		ulong extraout_RDX;
		float fVar2;
		float local_18;

		fVar2 = defaultValue.z;
		base();
		local_18 = defaultValue.x;
		uVar1 = local_18.SanitizeValue(this);
		this.DefaultValue.x = (float)(int)uVar1;
		this.DefaultValue.y = (float)(int)((ulong)uVar1 >> 0x20);
		this.DefaultValue.z = fVar2;
		vtableDispatch = (this.klass.vtable)._4_SetDefault.methodPtr;
		(*vtableDispatch)(this,(this.klass.vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
		return;
	}

	// Settings.TypedSetting<Vector3>$$SetDefault: 2 lines keep C-only constructs
	private void Vector3__SetDefault()
	{
		ulong uVar1;
		float fVar2;

		uVar1._0_4_ = this.DefaultValue.x;
		uVar1._4_4_ = this.DefaultValue.y;
		fVar2 = this.DefaultValue.z;
		uVar1 = uVar1.SanitizeValue(this);
		this._value.x = (float)(int)uVar1;
		this._value.y = (float)(int)((ulong)uVar1 >> 0x20);
		this._value.z = fVar2;
		return;
	}

	// Settings.TypedSetting<Vector3>$$GetDefaultValue: 2 lines keep C-only constructs
	private object Vector3__GetDefaultValue()
	{
		object pIVar1;
		ulong local_10;

		local_10._0_4_ = this.DefaultValue.x;
		local_10._4_4_ = this.DefaultValue.y;
		return pIVar1;
	}

	// Settings.TypedSetting<Vector3>$$SanitizeValue: clean
	private Vector3 Vector3__SanitizeValue(Vector3 value)
	{
		return (Vector3)value;
	}

	// Settings.TypedSetting<Vector3>$$ToString: 3 lines keep C-only constructs
	private String Vector3__ToString()
	{
		String pSVar1;
		ulong local_10;

		local_10._0_4_ = this._value.x;
		local_10._4_4_ = this._value.y;
		pSVar1 = (String)il2cpp_runtime_helper_03296cc0(&local_10, 0, 0, 0);
		return pSVar1;
	}

	// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$get_Value: 4 lines keep C-only constructs
	private __Il2CppFullySharedGenericType Il2CppFullySharedGenericType__get_Value()
	{
		uint uVar1;
		long plVar2;
		IntPtr __src;
		long in_RDX;
		__Il2CppFullySharedGenericType UVar3;

		plVar2 = *(long*)(*(long)(in_RDX + 0x20) + 0xc0);
		uVar1 = *(uint)(plVar2[1] + 0xfc);
		__src = il2cpp_codegen_get_instance_field_data_pointer(this, (IntPtr)(*(long)(*plVar2 + 0x80) + 0x20));
		UVar3.klass = memmove(method, __src, (ulong)uVar1);
		UVar3.monitor = UVar3.monitor;
		return UVar3;
	}

	// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$set_Value: 5 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__set_Value(__Il2CppFullySharedGenericType value)
	{
		uint size;
		long lVar1;
		long lVar2;
		MethodInfo pMVar3;
		Il2CppMethodPointer pIVar4;
		InvokerMethod pIVar5;
		ulong uVar6;
		ulong __dest;
		__Il2CppFullySharedGenericType __src;
		IntPtr data;
		IntPtr[] local_58 = new IntPtr[3];
		__Il2CppFullySharedGenericType local_40;
		IntPtr local_38;

		local_38 = value.monitor;
		local_40 = value.klass;
		lVar1 = *(long)((long)local_38 + 0x20);
		lVar2 = *(long)(*(long)(lVar1 + 0xc0) + 8);
		size = *(uint)(lVar2 + 0xfc);
		uVar6 = (ulong)size + 0xf & 0xfffffffffffffff0;
		__dest = (ulong)((long)local_58 - uVar6);
		data = (IntPtr)((long)__dest - uVar6);
		__src = local_40;
		if (-1 < *(int)(lVar2 + 0x28)) {
			__src = (__Il2CppFullySharedGenericType)&local_40;
		}
		*(ulong)((long)data + -8) = 0x43da6c4;
		memcpy(__dest, __src, (ulong)size);
		if (-1 < *(int)(*(long)(*(long)(lVar1 + 0xc0) + 8) + 0x28)) {
			__dest = (ulong)*__dest;
		}
		pMVar3 = (this.klass.vtable)._11_SanitizeValue.method;
		pIVar4 = pMVar3.virtualMethodPointer;
		pIVar5 = pMVar3.invoker_method;
		local_58[0] = __dest;
		local_58[1] = data;
		*(ulong)((long)data + -8) = 0x43da6fb;
		(*pIVar5)(pIVar4,pMVar3,this,local_58,data);
		lVar1 = *(long)(**(long*)(*(long)((long)local_38 + 0x20) + 0xc0) + 0x80);
		*(ulong)((long)data + -8) = 0x43da726;
		il2cpp_codegen_write_instance_field_data(this, (IntPtr)(lVar1 + 0x20), data, size);
		return;
	}

	// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$.ctor: clean
	private void Il2CppFullySharedGenericType___ctor()
	{
		base();
		return;
	}

	// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$.ctor: 8 lines keep C-only constructs
	private void Il2CppFullySharedGenericType___ctor(__Il2CppFullySharedGenericType defaultValue)
	{
		uint size;
		long lVar1;
		MethodInfo pMVar2;
		Il2CppMethodPointer pIVar3;
		InvokerMethod pIVar4;
		ulong uVar5;
		IntPtr pvVar6;
		ulong __dest;
		__Il2CppFullySharedGenericType __src;
		IntPtr data;
		IntPtr[] local_58 = new IntPtr[2];
		__Il2CppFullySharedGenericType local_48;
		IntPtr local_40;
		__Il2CppFullySharedGenericType local_38;

		pvVar6 = defaultValue.monitor;
		local_48 = defaultValue.klass;
		size = *(uint)(*(long)(*(long)(*(long)((long)pvVar6 + 0x20) + 0xc0) + 8) + 0xfc);
		uVar5 = (ulong)size + 0xf & 0xfffffffffffffff0;
		__dest = (ulong)((long)local_58 - uVar5);
		data = (IntPtr)((long)__dest - uVar5);
		local_38 = local_48;
		*(ulong)((long)data + -8) = 0x43da7a6;
		base();
		lVar1 = *(long)((long)pvVar6 + 0x20);
		__src = (__Il2CppFullySharedGenericType)&local_48;
		if (*(int)(*(long)(*(long)(lVar1 + 0xc0) + 8) + 0x28) < 0) {
			__src = local_38;
		}
		local_40 = pvVar6;
		*(ulong)((long)data + -8) = 0x43da7d1;
		memcpy(__dest, __src, (ulong)size);
		if (-1 < *(int)(*(long)(*(long)(lVar1 + 0xc0) + 8) + 0x28)) {
			__dest = (ulong)*__dest;
		}
		pMVar2 = (this.klass.vtable)._11_SanitizeValue.method;
		pIVar3 = pMVar2.virtualMethodPointer;
		pIVar4 = pMVar2.invoker_method;
		local_58[0] = __dest;
		local_58[1] = data;
		*(ulong)((long)data + -8) = 0x43da809;
		(*pIVar4)(pIVar3,pMVar2,this,local_58,data);
		pvVar6 = *(IntPtr)(**(long*)(*(long)((long)local_40 + 0x20) + 0xc0) + 0x80);
		*(ulong)((long)data + -8) = 0x43da830;
		il2cpp_codegen_write_instance_field_data(this, pvVar6, data, size);
		pMVar2 = (this.klass.vtable)._4_SetDefault.method;
		pIVar3 = (this.klass.vtable)._4_SetDefault.methodPtr;
		*(ulong)((long)data + -8) = 0x43da844;
		(*pIVar3)(this,pMVar2);
		return;
	}

	// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$SetDefault: 4 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__SetDefault()
	{
		Settings_TypedSetting_T__RGCTXs pSVar1;
		MethodInfo pMVar2;
		Il2CppMethodPointer pIVar3;
		InvokerMethod pIVar4;
		long lVar5;
		IntPtr pvVar6;
		ulong __dest;
		ulong __n;
		ulong[] apuStack_40 = new ulong[3];

		pSVar1 = method.klass.rgctx_data;
		__n = (ulong)(pSVar1._1_T._2).stack_slot_size;
		lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
		__dest = (ulong)((long)apuStack_40 + lVar5 + 8);
		pvVar6 = (pSVar1._0_Settings_TypedSetting_T_._1);
		*(ulong)((long)apuStack_40 + lVar5) = 0x43da8ac;
		pvVar6 = il2cpp_codegen_get_instance_field_data_pointer(this, pvVar6);
		*(ulong)((long)apuStack_40 + lVar5) = 0x43da8ba;
		memcpy(__dest, pvVar6, __n);
		pSVar1 = method.klass.rgctx_data;
		pMVar2 = pSVar1._3_Settings_TypedSetting_T__set_Value;
		pIVar3 = pMVar2.methodPointer;
		if (-1 < (int)(pSVar1._1_T._1).byval_arg.bits) {
			__dest = (ulong)*__dest;
		}
		pIVar4 = pMVar2.invoker_method;
		apuStack_40[2] = __dest;
		*(ulong)((long)apuStack_40 + lVar5) = 0x43da8ea;
		(*pIVar4)(pIVar3,pMVar2,this,apuStack_40 + 2,__dest);
		return;
	}

	// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$GetDefaultValue: 4 lines keep C-only constructs
	private object Il2CppFullySharedGenericType__GetDefaultValue()
	{
		Settings_TypedSetting_T__RGCTXs pSVar1;
		Il2CppClass klass;
		long lVar2;
		IntPtr pvVar3;
		object pIVar4;
		ulong __n;
		byte[] auStack_28 = new byte[8];

		pSVar1 = method.klass.rgctx_data;
		__n = (ulong)(pSVar1._1_T._2).stack_slot_size;
		lVar2 = -(__n + 0xf & 0xfffffffffffffff0);
		pvVar3 = (pSVar1._0_Settings_TypedSetting_T_._1);
		*(ulong)(auStack_28 + lVar2 + -8) = 0x43da943;
		pvVar3 = il2cpp_codegen_get_instance_field_data_pointer(this, pvVar3);
		*(ulong)(auStack_28 + lVar2 + -8) = 0x43da951;
		memcpy(auStack_28 + lVar2, pvVar3, __n);
		klass = method.klass.rgctx_data._1_T;
		*(ulong)(auStack_28 + lVar2 + -8) = 0x43da968;
		pIVar4 = (object)(auStack_28 + lVar2);
		return pIVar4;
	}

	// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$SanitizeValue: 6 lines keep C-only constructs
	private __Il2CppFullySharedGenericType Il2CppFullySharedGenericType__SanitizeValue(__Il2CppFullySharedGenericType value)
	{
		Il2CppClass pIVar1;
		IntPtr extraout_RDX;
		__Il2CppFullySharedGenericType __src;
		__Il2CppFullySharedGenericType UVar2;
		__Il2CppFullySharedGenericType pUStack_8;

		pUStack_8 = value.klass;
		pIVar1 = method.klass.rgctx_data._1_T;
		__src = pUStack_8;
		if (-1 < (int)(pIVar1._1).byval_arg.bits) {
			__src = (__Il2CppFullySharedGenericType)&pUStack_8;
		}
		memmove(value.monitor, __src, (ulong)(pIVar1._2).stack_slot_size);
		UVar2.monitor = extraout_RDX;
		UVar2.klass = pUStack_8;
		return UVar2;
	}

	// Settings.TypedSetting<__Il2CppFullySharedGenericType>$$ToString: 9 lines keep C-only constructs
	private String Il2CppFullySharedGenericType__ToString()
	{
		MethodInfo pMVar1;
		Il2CppMethodPointer pIVar2;
		InvokerMethod pIVar3;
		Il2CppClass pIVar4;
		Il2CppClass pIVar5;
		TypedSetting<T> pSVar6;
		Settings_TypedSetting_T__RGCTXs pSVar7;
		uint uVar8;
		ulong uVar9;
		IntPtr __dest;
		String __src;
		long lVar10;
		ulong __n;
		String local_38;

		pSVar6 = method.klass;
		pIVar5 = pSVar6.rgctx_data._1_T;
		uVar8 = (pIVar5._2).stack_slot_size;
		__n = (ulong)uVar8;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			uVar8 = (pIVar5._2).stack_slot_size;
			pSVar6 = method.klass;
		}
		lVar10 = (long)&local_38 - ((ulong)(uVar8 + 0x10) + 0xf & 0xfffffffffffffff0);
		uVar9 = __n + 0xf & 0xfffffffffffffff0;
		__src = (String)(lVar10 - uVar9);
		__dest = (IntPtr)((long)__src - uVar9);
		pMVar1 = pSVar6.rgctx_data._4_Settings_TypedSetting_T__get_Value;
		pIVar2 = pMVar1.methodPointer;
		pIVar3 = pMVar1.invoker_method;
		local_38 = __src;
		*(ulong)((long)__dest + -8) = 0x43daa45;
		(*pIVar3)(pIVar2,pMVar1,this,&local_38,__src);
		*(ulong)((long)__dest + -8) = 0x43daa53;
		memcpy(__dest, __src, __n);
		pSVar7 = method.klass.rgctx_data;
		pIVar5 = pSVar7._1_T;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			*(ulong)((long)__dest + -8) = 0x43daa70;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pSVar7 = method.klass.rgctx_data;
		}
		pIVar4 = pSVar7[1]._0_Settings_TypedSetting_T_;
		*(ulong)((long)__dest + -8) = 0x43daa94;
		il2cpp_runtime_helper_030d6e00(pIVar5, pIVar4, lVar10, __dest, 0, &local_38);
		return local_38;
	}
}
