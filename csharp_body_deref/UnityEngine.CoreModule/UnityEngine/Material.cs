// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Material
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000C3")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Material.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
public class Material : Object
{
	[Token(Token = "0x170000E6")]
	public Shader shader
	{
		[Token(Token = "0x6000466")]
		[Address(RVA = "0x4DC9F40", Offset = "0x4DC9F40", VA = "0x4DC9F40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000467")]
		[Address(RVA = "0x4DCA010", Offset = "0x4DCA010", VA = "0x4DCA010")]
		set
		{
		}
	}

	[Token(Token = "0x170000E7")]
	public Color color
	{
		[Token(Token = "0x6000468")]
		[Address(RVA = "0x4DCA150", Offset = "0x4DCA150", VA = "0x4DCA150")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000469")]
		[Address(RVA = "0x4DCA350", Offset = "0x4DCA350", VA = "0x4DCA350")]
		set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	public Texture mainTexture
	{
		[Token(Token = "0x600046A")]
		[Address(RVA = "0x4DCA6B0", Offset = "0x4DCA6B0", VA = "0x4DCA6B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600046B")]
		[Address(RVA = "0x4DCA9B0", Offset = "0x4DCA9B0", VA = "0x4DCA9B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E9")]
	public Vector2 mainTextureOffset
	{
		[Token(Token = "0x600046C")]
		[Address(RVA = "0x4DCAB20", Offset = "0x4DCAB20", VA = "0x4DCAB20")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600046D")]
		[Address(RVA = "0x4DCAC90", Offset = "0x4DCAC90", VA = "0x4DCAC90")]
		set
		{
		}
	}

	[Token(Token = "0x170000EA")]
	public Vector2 mainTextureScale
	{
		[Token(Token = "0x600046E")]
		[Address(RVA = "0x4DCAFE0", Offset = "0x4DCAFE0", VA = "0x4DCAFE0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600046F")]
		[Address(RVA = "0x4DCB140", Offset = "0x4DCB140", VA = "0x4DCB140")]
		set
		{
		}
	}

	[Token(Token = "0x170000EB")]
	public int renderQueue
	{
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x4DCB680", Offset = "0x4DCB680", VA = "0x4DCB680")]
		[UnityEngine.Bindings.NativeName("SetCustomRenderQueue")]
		set
		{
		}
	}

	[Token(Token = "0x170000EC")]
	internal int rawRenderQueue
	{
		[Token(Token = "0x6000474")]
		[Address(RVA = "0x4DCB760", Offset = "0x4DCB760", VA = "0x4DCB760")]
		[UnityEngine.Bindings.NativeName("GetCustomRenderQueue")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000ED")]
	public MaterialGlobalIlluminationFlags globalIlluminationFlags
	{
		[Token(Token = "0x6000478")]
		[Address(RVA = "0x4DCBAD0", Offset = "0x4DCBAD0", VA = "0x4DCBAD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000EE")]
	[UnityEngine.Bindings.NativeProperty("EnableInstancingVariants")]
	public bool enableInstancing
	{
		[Token(Token = "0x6000479")]
		[Address(RVA = "0x4DC2970", Offset = "0x4DC2970", VA = "0x4DC2970")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600047A")]
		[Address(RVA = "0x4DCBBE0", Offset = "0x4DCBBE0", VA = "0x4DCBBE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000EF")]
	public int passCount
	{
		[Token(Token = "0x600047B")]
		[Address(RVA = "0x4DCBCC0", Offset = "0x4DCBCC0", VA = "0x4DCBCC0")]
		[UnityEngine.Bindings.NativeName("GetShader()->GetPassCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F0")]
	public string[] shaderKeywords
	{
		[Token(Token = "0x6000482")]
		[Address(RVA = "0x4DCC330", Offset = "0x4DCC330", VA = "0x4DCC330")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000483")]
		[Address(RVA = "0x4DCC3D0", Offset = "0x4DCC3D0", VA = "0x4DCC3D0")]
		set
		{
		}
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x4DC9BA0", Offset = "0x4DC9BA0", VA = "0x4DC9BA0")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::CreateWithShader")]
	private static void CreateWithShader([UnityEngine.Writable] Material self, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Shader shader)
	{
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x4DC9CC0", Offset = "0x4DC9CC0", VA = "0x4DC9CC0")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::CreateWithMaterial")]
	private static void CreateWithMaterial([UnityEngine.Writable] Material self, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Material source)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000462")]
	[Address(RVA = "0x4DC9DE0", Offset = "0x4DC9DE0", VA = "0x4DC9DE0")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::CreateWithString")]
	private static extern void CreateWithString([UnityEngine.Writable] Material self);

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x4DC9E10", Offset = "0x4DC9E10", VA = "0x4DC9E10")]
	public Material(Shader shader)
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x4DC9E70", Offset = "0x4DC9E70", VA = "0x4DC9E70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Material(Material source)
	{
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x4DC9ED0", Offset = "0x4DC9ED0", VA = "0x4DC9ED0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Creating materials from shader source string is no longer supported. Use Shader assets instead.", false)]
	public Material(string contents)
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x4DCA250", Offset = "0x4DCA250", VA = "0x4DCA250")]
	[UnityEngine.Bindings.NativeName("GetFirstPropertyNameIdByAttributeFromScript")]
	private int GetFirstPropertyNameIdByAttribute(ShaderPropertyFlags attributeFlag)
	{
		return default(int);
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x4DCB4D0", Offset = "0x4DCB4D0", VA = "0x4DCB4D0")]
	[UnityEngine.Bindings.NativeName("HasPropertyFromScript")]
	public bool HasProperty(int nameID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x4DCB5B0", Offset = "0x4DCB5B0", VA = "0x4DCB5B0")]
	public bool HasProperty(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x4DCB830", Offset = "0x4DCB830", VA = "0x4DCB830")]
	public void EnableKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x4DCB910", Offset = "0x4DCB910", VA = "0x4DCB910")]
	public void DisableKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x4DCB9F0", Offset = "0x4DCB9F0", VA = "0x4DCB9F0")]
	public bool IsKeywordEnabled(string keyword)
	{
		return default(bool);
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x4DCBD90", Offset = "0x4DCBD90", VA = "0x4DCBD90")]
	public int FindPass(string passName)
	{
		return default(int);
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x4DCBE70", Offset = "0x4DCBE70", VA = "0x4DCBE70")]
	public void SetOverrideTag(string tag, string val)
	{
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x4DCBF60", Offset = "0x4DCBF60", VA = "0x4DCBF60")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::SetPass", HasExplicitThis = true)]
	public bool SetPass(int pass)
	{
		return default(bool);
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x4DCC040", Offset = "0x4DCC040", VA = "0x4DCC040")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::CopyPropertiesFrom", HasExplicitThis = true)]
	public void CopyPropertiesFromMaterial(Material mat)
	{
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x4DCC180", Offset = "0x4DCC180", VA = "0x4DCC180")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::GetShaderKeywords", HasExplicitThis = true)]
	private string[] GetShaderKeywords()
	{
		return null;
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x4DCC250", Offset = "0x4DCC250", VA = "0x4DCC250")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::SetShaderKeywords", HasExplicitThis = true)]
	private void SetShaderKeywords(string[] names)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x4DCC470", Offset = "0x4DCC470", VA = "0x4DCC470")]
	public int ComputeCRC()
	{
		return default(int);
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x4DCC540", Offset = "0x4DCC540", VA = "0x4DCC540")]
	[UnityEngine.Bindings.NativeName("SetIntFromScript")]
	private void SetIntImpl(int name, int value)
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x4DCC630", Offset = "0x4DCC630", VA = "0x4DCC630")]
	[UnityEngine.Bindings.NativeName("SetFloatFromScript")]
	private void SetFloatImpl(int name, float value)
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x4DCC720", Offset = "0x4DCC720", VA = "0x4DCC720")]
	[UnityEngine.Bindings.NativeName("SetColorFromScript")]
	private void SetColorImpl(int name, Color value)
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x4DCC810", Offset = "0x4DCC810", VA = "0x4DCC810")]
	[UnityEngine.Bindings.NativeName("SetMatrixFromScript")]
	private void SetMatrixImpl(int name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x4DCC900", Offset = "0x4DCC900", VA = "0x4DCC900")]
	[UnityEngine.Bindings.NativeName("SetTextureFromScript")]
	private void SetTextureImpl(int name, Texture value)
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x4DCCA40", Offset = "0x4DCCA40", VA = "0x4DCCA40")]
	[UnityEngine.Bindings.NativeName("SetBufferFromScript")]
	private void SetGraphicsBufferImpl(int name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x4DCCB30", Offset = "0x4DCCB30", VA = "0x4DCCB30")]
	[UnityEngine.Bindings.NativeName("SetConstantBufferFromScript")]
	private void SetConstantBufferImpl(int name, ComputeBuffer value, int offset, int size)
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x4DCCC40", Offset = "0x4DCCC40", VA = "0x4DCCC40")]
	[UnityEngine.Bindings.NativeName("GetFloatFromScript")]
	private float GetFloatImpl(int name)
	{
		return default(float);
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x4DCCD20", Offset = "0x4DCCD20", VA = "0x4DCCD20")]
	[UnityEngine.Bindings.NativeName("GetColorFromScript")]
	private Color GetColorImpl(int name)
	{
		return default(Color);
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x4DCCE20", Offset = "0x4DCCE20", VA = "0x4DCCE20")]
	[UnityEngine.Bindings.NativeName("GetTextureFromScript")]
	private Texture GetTextureImpl(int name)
	{
		return null;
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x4DCCF00", Offset = "0x4DCCF00", VA = "0x4DCCF00")]
	[UnityEngine.Bindings.NativeName("GetTextureScaleAndOffsetFromScript")]
	private Vector4 GetTextureScaleAndOffsetImpl(int name)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x4DCD000", Offset = "0x4DCD000", VA = "0x4DCD000")]
	[UnityEngine.Bindings.NativeName("SetTextureOffsetFromScript")]
	private void SetTextureOffsetImpl(int name, Vector2 offset)
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x4DCD0F0", Offset = "0x4DCD0F0", VA = "0x4DCD0F0")]
	[UnityEngine.Bindings.NativeName("SetTextureScaleFromScript")]
	private void SetTextureScaleImpl(int name, Vector2 scale)
	{
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x4DCD1E0", Offset = "0x4DCD1E0", VA = "0x4DCD1E0")]
	public void SetInt(string name, int value)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x4DCD2D0", Offset = "0x4DCD2D0", VA = "0x4DCD2D0")]
	public void SetFloat(string name, float value)
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x4DCD3B0", Offset = "0x4DCD3B0", VA = "0x4DCD3B0")]
	public void SetFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x4DCD460", Offset = "0x4DCD460", VA = "0x4DCD460")]
	public void SetInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x4DCA5C0", Offset = "0x4DCA5C0", VA = "0x4DCA5C0")]
	public void SetColor(string name, Color value)
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x4DCA510", Offset = "0x4DCA510", VA = "0x4DCA510")]
	public void SetColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x4DCD510", Offset = "0x4DCD510", VA = "0x4DCD510")]
	public void SetVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x4DCD600", Offset = "0x4DCD600", VA = "0x4DCD600")]
	public void SetVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x4DCD6B0", Offset = "0x4DCD6B0", VA = "0x4DCD6B0")]
	public void SetMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x4DCD7B0", Offset = "0x4DCD7B0", VA = "0x4DCD7B0")]
	public void SetMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x4DCAAD0", Offset = "0x4DCAAD0", VA = "0x4DCAAD0")]
	public void SetTexture(string name, Texture value)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x4DCAAC0", Offset = "0x4DCAAC0", VA = "0x4DCAAC0")]
	public void SetTexture(int nameID, Texture value)
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x4DCD890", Offset = "0x4DCD890", VA = "0x4DCD890")]
	public void SetBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x4DCD970", Offset = "0x4DCD970", VA = "0x4DCD970")]
	public void SetConstantBuffer(int nameID, ComputeBuffer value, int offset, int size)
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x4DCDA30", Offset = "0x4DCDA30", VA = "0x4DCDA30")]
	public float GetFloat(string name)
	{
		return default(float);
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x4DCDB00", Offset = "0x4DCDB00", VA = "0x4DCDB00")]
	public float GetFloat(int nameID)
	{
		return default(float);
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x4DCA300", Offset = "0x4DCA300", VA = "0x4DCA300")]
	public Color GetColor(string name)
	{
		return default(Color);
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x4DCA2F0", Offset = "0x4DCA2F0", VA = "0x4DCA2F0")]
	public Color GetColor(int nameID)
	{
		return default(Color);
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x4DCDBA0", Offset = "0x4DCDBA0", VA = "0x4DCDBA0")]
	public Vector4 GetVector(string name)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x4DCDBF0", Offset = "0x4DCDBF0", VA = "0x4DCDBF0")]
	public Vector4 GetVector(int nameID)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x4DCA8E0", Offset = "0x4DCA8E0", VA = "0x4DCA8E0")]
	public Texture GetTexture(string name)
	{
		return null;
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x4DCA840", Offset = "0x4DCA840", VA = "0x4DCA840")]
	public Texture GetTexture(int nameID)
	{
		return null;
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x4DCAEF0", Offset = "0x4DCAEF0", VA = "0x4DCAEF0")]
	public void SetTextureOffset(string name, Vector2 value)
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x4DCAE40", Offset = "0x4DCAE40", VA = "0x4DCAE40")]
	public void SetTextureOffset(int nameID, Vector2 value)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x4DCB3A0", Offset = "0x4DCB3A0", VA = "0x4DCB3A0")]
	public void SetTextureScale(string name, Vector2 value)
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x4DCB2F0", Offset = "0x4DCB2F0", VA = "0x4DCB2F0")]
	public void SetTextureScale(int nameID, Vector2 value)
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x4DCAC40", Offset = "0x4DCAC40", VA = "0x4DCAC40")]
	public Vector2 GetTextureOffset(string name)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x4DCAC30", Offset = "0x4DCAC30", VA = "0x4DCAC30")]
	public Vector2 GetTextureOffset(int nameID)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x4DCB0F0", Offset = "0x4DCB0F0", VA = "0x4DCB0F0")]
	public Vector2 GetTextureScale(string name)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x4DCB0E0", Offset = "0x4DCB0E0", VA = "0x4DCB0E0")]
	public Vector2 GetTextureScale(int nameID)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x4DC9C80", Offset = "0x4DC9C80", VA = "0x4DC9C80")]
	private static extern void CreateWithShader_Injected([UnityEngine.Writable] Material self, IntPtr shader);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x4DC9DA0", Offset = "0x4DC9DA0", VA = "0x4DC9DA0")]
	private static extern void CreateWithMaterial_Injected([UnityEngine.Writable] Material self, IntPtr source);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x4DC9FE0", Offset = "0x4DC9FE0", VA = "0x4DC9FE0")]
	private static extern Shader get_shader_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x4DCA110", Offset = "0x4DCA110", VA = "0x4DCA110")]
	private static extern void set_shader_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x4DCB490", Offset = "0x4DCB490", VA = "0x4DCB490")]
	private static extern int GetFirstPropertyNameIdByAttribute_Injected(IntPtr _unity_self, ShaderPropertyFlags attributeFlag);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x4DCB570", Offset = "0x4DCB570", VA = "0x4DCB570")]
	private static extern bool HasProperty_Injected(IntPtr _unity_self, int nameID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x4DCB720", Offset = "0x4DCB720", VA = "0x4DCB720")]
	private static extern void set_renderQueue_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x4DCB800", Offset = "0x4DCB800", VA = "0x4DCB800")]
	private static extern int get_rawRenderQueue_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x4DCB8D0", Offset = "0x4DCB8D0", VA = "0x4DCB8D0")]
	private static extern void EnableKeyword_Injected(IntPtr _unity_self, string keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x4DCB9B0", Offset = "0x4DCB9B0", VA = "0x4DCB9B0")]
	private static extern void DisableKeyword_Injected(IntPtr _unity_self, string keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x4DCBA90", Offset = "0x4DCBA90", VA = "0x4DCBA90")]
	private static extern bool IsKeywordEnabled_Injected(IntPtr _unity_self, string keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x4DCBB70", Offset = "0x4DCBB70", VA = "0x4DCBB70")]
	private static extern void set_globalIlluminationFlags_Injected(IntPtr _unity_self, MaterialGlobalIlluminationFlags value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x4DCBBB0", Offset = "0x4DCBBB0", VA = "0x4DCBBB0")]
	private static extern bool get_enableInstancing_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x4DCBC80", Offset = "0x4DCBC80", VA = "0x4DCBC80")]
	private static extern void set_enableInstancing_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x4DCBD60", Offset = "0x4DCBD60", VA = "0x4DCBD60")]
	private static extern int get_passCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x4DCBE30", Offset = "0x4DCBE30", VA = "0x4DCBE30")]
	private static extern int FindPass_Injected(IntPtr _unity_self, string passName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x4DCBF20", Offset = "0x4DCBF20", VA = "0x4DCBF20")]
	private static extern void SetOverrideTag_Injected(IntPtr _unity_self, string tag, string val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x4DCC000", Offset = "0x4DCC000", VA = "0x4DCC000")]
	private static extern bool SetPass_Injected(IntPtr _unity_self, int pass);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x4DCC140", Offset = "0x4DCC140", VA = "0x4DCC140")]
	private static extern void CopyPropertiesFromMaterial_Injected(IntPtr _unity_self, IntPtr mat);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x4DCC220", Offset = "0x4DCC220", VA = "0x4DCC220")]
	private static extern string[] GetShaderKeywords_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x4DCC2F0", Offset = "0x4DCC2F0", VA = "0x4DCC2F0")]
	private static extern void SetShaderKeywords_Injected(IntPtr _unity_self, string[] names);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x4DCC510", Offset = "0x4DCC510", VA = "0x4DCC510")]
	private static extern int ComputeCRC_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x4DCC5F0", Offset = "0x4DCC5F0", VA = "0x4DCC5F0")]
	private static extern void SetIntImpl_Injected(IntPtr _unity_self, int name, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x4DCC6E0", Offset = "0x4DCC6E0", VA = "0x4DCC6E0")]
	private static extern void SetFloatImpl_Injected(IntPtr _unity_self, int name, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x4DCC7D0", Offset = "0x4DCC7D0", VA = "0x4DCC7D0")]
	private static extern void SetColorImpl_Injected(IntPtr _unity_self, int name, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x4DCC8C0", Offset = "0x4DCC8C0", VA = "0x4DCC8C0")]
	private static extern void SetMatrixImpl_Injected(IntPtr _unity_self, int name, [In] ref Matrix4x4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x4DCCA00", Offset = "0x4DCCA00", VA = "0x4DCCA00")]
	private static extern void SetTextureImpl_Injected(IntPtr _unity_self, int name, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x4DCCAF0", Offset = "0x4DCCAF0", VA = "0x4DCCAF0")]
	private static extern void SetGraphicsBufferImpl_Injected(IntPtr _unity_self, int name, GraphicsBuffer value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x4DCCBF0", Offset = "0x4DCCBF0", VA = "0x4DCCBF0")]
	private static extern void SetConstantBufferImpl_Injected(IntPtr _unity_self, int name, ComputeBuffer value, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x4DCCCE0", Offset = "0x4DCCCE0", VA = "0x4DCCCE0")]
	private static extern float GetFloatImpl_Injected(IntPtr _unity_self, int name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x4DCCDE0", Offset = "0x4DCCDE0", VA = "0x4DCCDE0")]
	private static extern void GetColorImpl_Injected(IntPtr _unity_self, int name, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x4DCCEC0", Offset = "0x4DCCEC0", VA = "0x4DCCEC0")]
	private static extern Texture GetTextureImpl_Injected(IntPtr _unity_self, int name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x4DCCFC0", Offset = "0x4DCCFC0", VA = "0x4DCCFC0")]
	private static extern void GetTextureScaleAndOffsetImpl_Injected(IntPtr _unity_self, int name, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x4DCD0B0", Offset = "0x4DCD0B0", VA = "0x4DCD0B0")]
	private static extern void SetTextureOffsetImpl_Injected(IntPtr _unity_self, int name, [In] ref Vector2 offset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x4DCD1A0", Offset = "0x4DCD1A0", VA = "0x4DCD1A0")]
	private static extern void SetTextureScaleImpl_Injected(IntPtr _unity_self, int name, [In] ref Vector2 scale);
}
